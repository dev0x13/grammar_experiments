
// Generated from /media/george/37882f3f-7578-4629-9e35-0fae5658c718/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/RepoQuery.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  RepoQueryParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, INTEGER = 16, WS = 17, FILTER_TOKEN = 18
  };

  enum {
    RuleQuery = 0, RuleKey = 1, RuleAtom = 2, RuleIndex = 3, RuleList_of_parent_indexes = 4, 
    RuleMagic_var = 5, RuleExpr = 6, RuleRange = 7, RuleList = 8, RuleReg_exp = 9, 
    RuleFilter = 10
  };

  RepoQueryParser(antlr4::TokenStream *input);
  ~RepoQueryParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class QueryContext;
  class KeyContext;
  class AtomContext;
  class IndexContext;
  class List_of_parent_indexesContext;
  class Magic_varContext;
  class ExprContext;
  class RangeContext;
  class ListContext;
  class Reg_expContext;
  class FilterContext; 

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyContext *key();
    antlr4::tree::TerminalNode *EOF();
    std::vector<FilterContext *> filter();
    FilterContext* filter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_parent_indexesContext *list_of_parent_indexes();
    IndexContext *index();
    Reg_expContext *reg_exp();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyContext* key();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    Magic_varContext *magic_var();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomContext *atom();
    RangeContext *range();
    ListContext *list();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  List_of_parent_indexesContext : public antlr4::ParserRuleContext {
  public:
    List_of_parent_indexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexContext *> index();
    IndexContext* index(size_t i);
    Reg_expContext *reg_exp();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parent_indexesContext* list_of_parent_indexes();

  class  Magic_varContext : public antlr4::ParserRuleContext {
  public:
    Magic_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Magic_varContext* magic_var();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    RepoQueryParser::ExprContext *left_mul_expr = nullptr;;
    RepoQueryParser::ExprContext *left_sum_expr = nullptr;;
    RepoQueryParser::ExprContext *single_expr = nullptr;;
    RepoQueryParser::AtomContext *single_operand = nullptr;;
    antlr4::Token *op = nullptr;;
    RepoQueryParser::ExprContext *right_mul_exp = nullptr;;
    RepoQueryParser::ExprContext *right_sum_exp = nullptr;;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    AtomContext *atom();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RepoQueryParser::ExprContext *left = nullptr;;
    RepoQueryParser::ExprContext *right = nullptr;;
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeContext* range();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


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

  class  FilterContext : public antlr4::ParserRuleContext {
  public:
    FilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FILTER_TOKEN();
    antlr4::tree::TerminalNode* FILTER_TOKEN(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterContext* filter();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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

