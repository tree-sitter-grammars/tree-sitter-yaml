package tree_sitter_yaml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_yaml "github.com/tree-sitter-grammars/tree-sitter-yaml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_yaml.Language())
	if language == nil {
		t.Errorf("Error loading YAML grammar")
	}
}
