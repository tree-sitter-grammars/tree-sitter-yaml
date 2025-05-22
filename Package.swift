// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterYAML",
    products: [
        .library(name: "TreeSitterYAML", targets: ["TreeSitterYAML"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterYAML",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterYAMLTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterYAML",
            ],
            path: "bindings/swift/TreeSitterYAMLTests"
        )
    ],
    cLanguageStandard: .c11
)
