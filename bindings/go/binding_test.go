package tree_sitter_vb_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-vb"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_vb.Language())
	if language == nil {
		t.Errorf("Error loading Vb grammar")
	}
}
