// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterYAML",
    products: [
        .library(name: "TreeSitterYAML", targets: ["TreeSitterYAML"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterYAML",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
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
