
// Generated from /home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/RepoKey.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  RepoKeyParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, INTEGER = 12, WS = 13
  };

  enum {
    RuleKey = 0, RuleIndex = 1, RuleList_of_parent_indexes = 2, RuleParent_index = 3, 
    RuleMagic_var = 4, RuleMul_exp = 5, RuleSum_exp = 6, RuleRange = 7, 
    RuleList = 8, RuleReg_exp = 9
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
  class List_of_parent_indexesContext;
  class Parent_indexContext;
  class Magic_varContext;
  class Mul_expContext;
  class Sum_expContext;
  class RangeContext;
  class ListContext;
  class Reg_expContext; 

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexContext *index();
    List_of_parent_indexesContext *list_of_parent_indexes();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyContext* key();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    RangeContext *range();
    ListContext *list();
    Mul_expContext *mul_exp();
    Sum_expContext *sum_exp();
    Reg_expContext *reg_exp();
    Magic_varContext *magic_var();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  List_of_parent_indexesContext : public antlr4::ParserRuleContext {
  public:
    List_of_parent_indexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parent_indexContext *> parent_index();
    Parent_indexContext* parent_index(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parent_indexesContext* list_of_parent_indexes();

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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parent_indexContext* parent_index();

  class  Magic_varContext : public antlr4::ParserRuleContext {
  public:
    Magic_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_expContext* mul_exp();

  class  Sum_expContext : public antlr4::ParserRuleContext {
  public:
    Sum_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Mul_expContext *> mul_exp();
    Mul_expContext* mul_exp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeContext* range();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListContext* list();

  class  Reg_expContext : public antlr4::ParserRuleContext {
  public:
    Reg_expContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
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

