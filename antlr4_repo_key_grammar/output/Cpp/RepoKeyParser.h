
// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  RepoKeyParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, INTEGER = 10, WS = 11
  };

  enum {
    RuleKey = 0, RuleIndex = 1, RuleParent_index = 2, RuleMagic_var = 3, 
    RuleMul_exp = 4, RuleSum_exp = 5, RuleRange = 6, RuleReg_exp = 7
  };

  RepoKeyParser(antlr4::TokenStream *input);
  ~RepoKeyParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KeyContext;
  class IndexContext;
  class Parent_indexContext;
  class Magic_varContext;
  class Mul_expContext;
  class Sum_expContext;
  class RangeContext;
  class Reg_expContext; 

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexContext *index();
    std::vector<Parent_indexContext *> parent_index();
    Parent_indexContext* parent_index(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyContext* key();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    RangeContext *range();
    Mul_expContext *mul_exp();
    Sum_expContext *sum_exp();
    Reg_expContext *reg_exp();
    Magic_varContext *magic_var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexContext* index();

  class  Parent_indexContext : public antlr4::ParserRuleContext {
  public:
    Parent_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    RangeContext *range();
    Mul_expContext *mul_exp();
    Sum_expContext *sum_exp();
    Reg_expContext *reg_exp();
    Magic_varContext *magic_var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parent_indexContext* parent_index();

  class  Magic_varContext : public antlr4::ParserRuleContext {
  public:
    Magic_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Magic_varContext* magic_var();

  class  Mul_expContext : public antlr4::ParserRuleContext {
  public:
    Mul_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);
    std::vector<Magic_varContext *> magic_var();
    Magic_varContext* magic_var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mul_expContext* mul_exp();

  class  Sum_expContext : public antlr4::ParserRuleContext {
  public:
    Sum_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Mul_expContext *> mul_exp();
    Mul_expContext* mul_exp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sum_expContext* sum_exp();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sum_expContext *> sum_exp();
    Sum_expContext* sum_exp(size_t i);
    std::vector<Mul_expContext *> mul_exp();
    Mul_expContext* mul_exp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  Reg_expContext : public antlr4::ParserRuleContext {
  public:
    Reg_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reg_expContext* reg_exp();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

