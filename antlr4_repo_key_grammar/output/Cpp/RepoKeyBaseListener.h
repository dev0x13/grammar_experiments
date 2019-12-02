
// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "RepoKeyListener.h"


/**
 * This class provides an empty implementation of RepoKeyListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RepoKeyBaseListener : public RepoKeyListener {
public:

  virtual void enterKey(RepoKeyParser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(RepoKeyParser::KeyContext * /*ctx*/) override { }

  virtual void enterIndex(RepoKeyParser::IndexContext * /*ctx*/) override { }
  virtual void exitIndex(RepoKeyParser::IndexContext * /*ctx*/) override { }

  virtual void enterParent_index(RepoKeyParser::Parent_indexContext * /*ctx*/) override { }
  virtual void exitParent_index(RepoKeyParser::Parent_indexContext * /*ctx*/) override { }

  virtual void enterMagic_var(RepoKeyParser::Magic_varContext * /*ctx*/) override { }
  virtual void exitMagic_var(RepoKeyParser::Magic_varContext * /*ctx*/) override { }

  virtual void enterMul_exp(RepoKeyParser::Mul_expContext * /*ctx*/) override { }
  virtual void exitMul_exp(RepoKeyParser::Mul_expContext * /*ctx*/) override { }

  virtual void enterSum_exp(RepoKeyParser::Sum_expContext * /*ctx*/) override { }
  virtual void exitSum_exp(RepoKeyParser::Sum_expContext * /*ctx*/) override { }

  virtual void enterRange(RepoKeyParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(RepoKeyParser::RangeContext * /*ctx*/) override { }

  virtual void enterReg_exp(RepoKeyParser::Reg_expContext * /*ctx*/) override { }
  virtual void exitReg_exp(RepoKeyParser::Reg_expContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

