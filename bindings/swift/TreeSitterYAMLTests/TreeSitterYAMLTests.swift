import XCTest
import SwiftTreeSitter
import TreeSitterYAML

final class TreeSitterYAMLTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_yaml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading YAML grammar")
    }
}
