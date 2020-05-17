
// Generated from /media/george/HOME/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/grammars/RepoQuery.g4 by ANTLR 4.7.2


#include "RepoQueryVisitor.h"

#include "RepoQueryParser.h"


using namespace antlrcpp;
using namespace antlr4;

RepoQueryParser::RepoQueryParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RepoQueryParser::~RepoQueryParser() {
  delete _interpreter;
}

std::string RepoQueryParser::getGrammarFileName() const {
  return "RepoQuery.g4";
}

const std::vector<std::string>& RepoQueryParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& RepoQueryParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- QueryContext ------------------------------------------------------------------

RepoQueryParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RepoQueryParser::KeyContext* RepoQueryParser::QueryContext::key() {
  return getRuleContext<RepoQueryParser::KeyContext>(0);
}

tree::TerminalNode* RepoQueryParser::QueryContext::EOF() {
  return getToken(RepoQueryParser::EOF, 0);
}

std::vector<RepoQueryParser::FilterContext *> RepoQueryParser::QueryContext::filter() {
  return getRuleContexts<RepoQueryParser::FilterContext>();
}

RepoQueryParser::FilterContext* RepoQueryParser::QueryContext::filter(size_t i) {
  return getRuleContext<RepoQueryParser::FilterContext>(i);
}


size_t RepoQueryParser::QueryContext::getRuleIndex() const {
  return RepoQueryParser::RuleQuery;
}


antlrcpp::Any RepoQueryParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::QueryContext* RepoQueryParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 0, RepoQueryParser::RuleQuery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      key();
      setState(25);
      match(RepoQueryParser::EOF);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(27);
      key();
      setState(28);
      match(RepoQueryParser::T__0);
      setState(38);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(29);
        filter();
        break;
      }

      case 2: {
        setState(30);
        filter();
        setState(35);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == RepoQueryParser::T__1) {
          setState(31);
          match(RepoQueryParser::T__1);
          setState(32);
          filter();
          setState(37);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      }
      setState(40);
      match(RepoQueryParser::EOF);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyContext ------------------------------------------------------------------

RepoQueryParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RepoQueryParser::List_of_parent_indexesContext* RepoQueryParser::KeyContext::list_of_parent_indexes() {
  return getRuleContext<RepoQueryParser::List_of_parent_indexesContext>(0);
}

RepoQueryParser::IndexContext* RepoQueryParser::KeyContext::index() {
  return getRuleContext<RepoQueryParser::IndexContext>(0);
}

RepoQueryParser::Reg_expContext* RepoQueryParser::KeyContext::reg_exp() {
  return getRuleContext<RepoQueryParser::Reg_expContext>(0);
}


size_t RepoQueryParser::KeyContext::getRuleIndex() const {
  return RepoQueryParser::RuleKey;
}


antlrcpp::Any RepoQueryParser::KeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitKey(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::KeyContext* RepoQueryParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 2, RepoQueryParser::RuleKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(RepoQueryParser::T__2);
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RepoQueryParser::T__4:
      case RepoQueryParser::T__5:
      case RepoQueryParser::T__6:
      case RepoQueryParser::T__7:
      case RepoQueryParser::T__14:
      case RepoQueryParser::INTEGER: {
        setState(45);
        index();
        break;
      }

      case RepoQueryParser::T__9: {
        setState(46);
        reg_exp();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(49);
    match(RepoQueryParser::T__2);
    setState(50);
    list_of_parent_indexes();
    setState(51);
    match(RepoQueryParser::T__3);
    setState(52);
    match(RepoQueryParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

RepoQueryParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RepoQueryParser::AtomContext::INTEGER() {
  return getToken(RepoQueryParser::INTEGER, 0);
}

RepoQueryParser::Magic_varContext* RepoQueryParser::AtomContext::magic_var() {
  return getRuleContext<RepoQueryParser::Magic_varContext>(0);
}


size_t RepoQueryParser::AtomContext::getRuleIndex() const {
  return RepoQueryParser::RuleAtom;
}


antlrcpp::Any RepoQueryParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::AtomContext* RepoQueryParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 4, RepoQueryParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RepoQueryParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        match(RepoQueryParser::INTEGER);
        break;
      }

      case RepoQueryParser::T__4:
      case RepoQueryParser::T__5:
      case RepoQueryParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(55);
        magic_var();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

RepoQueryParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RepoQueryParser::AtomContext* RepoQueryParser::IndexContext::atom() {
  return getRuleContext<RepoQueryParser::AtomContext>(0);
}

RepoQueryParser::RangeContext* RepoQueryParser::IndexContext::range() {
  return getRuleContext<RepoQueryParser::RangeContext>(0);
}

RepoQueryParser::ListContext* RepoQueryParser::IndexContext::list() {
  return getRuleContext<RepoQueryParser::ListContext>(0);
}

RepoQueryParser::ExprContext* RepoQueryParser::IndexContext::expr() {
  return getRuleContext<RepoQueryParser::ExprContext>(0);
}


size_t RepoQueryParser::IndexContext::getRuleIndex() const {
  return RepoQueryParser::RuleIndex;
}


antlrcpp::Any RepoQueryParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::IndexContext* RepoQueryParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 6, RepoQueryParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(58);
      atom();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      range();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(60);
      list();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(61);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_of_parent_indexesContext ------------------------------------------------------------------

RepoQueryParser::List_of_parent_indexesContext::List_of_parent_indexesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoQueryParser::IndexContext *> RepoQueryParser::List_of_parent_indexesContext::index() {
  return getRuleContexts<RepoQueryParser::IndexContext>();
}

RepoQueryParser::IndexContext* RepoQueryParser::List_of_parent_indexesContext::index(size_t i) {
  return getRuleContext<RepoQueryParser::IndexContext>(i);
}

RepoQueryParser::Reg_expContext* RepoQueryParser::List_of_parent_indexesContext::reg_exp() {
  return getRuleContext<RepoQueryParser::Reg_expContext>(0);
}


size_t RepoQueryParser::List_of_parent_indexesContext::getRuleIndex() const {
  return RepoQueryParser::RuleList_of_parent_indexes;
}


antlrcpp::Any RepoQueryParser::List_of_parent_indexesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitList_of_parent_indexes(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::List_of_parent_indexesContext* RepoQueryParser::list_of_parent_indexes() {
  List_of_parent_indexesContext *_localctx = _tracker.createInstance<List_of_parent_indexesContext>(_ctx, getState());
  enterRule(_localctx, 8, RepoQueryParser::RuleList_of_parent_indexes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(66);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RepoQueryParser::T__4:
        case RepoQueryParser::T__5:
        case RepoQueryParser::T__6:
        case RepoQueryParser::T__7:
        case RepoQueryParser::T__14:
        case RepoQueryParser::INTEGER: {
          setState(64);
          index();
          break;
        }

        case RepoQueryParser::T__9: {
          setState(65);
          reg_exp();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      setState(68);
      index();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RepoQueryParser::T__1) {
        setState(69);
        match(RepoQueryParser::T__1);
        setState(70);
        index();
        setState(75);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Magic_varContext ------------------------------------------------------------------

RepoQueryParser::Magic_varContext::Magic_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RepoQueryParser::Magic_varContext::getRuleIndex() const {
  return RepoQueryParser::RuleMagic_var;
}


antlrcpp::Any RepoQueryParser::Magic_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitMagic_var(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::Magic_varContext* RepoQueryParser::magic_var() {
  Magic_varContext *_localctx = _tracker.createInstance<Magic_varContext>(_ctx, getState());
  enterRule(_localctx, 10, RepoQueryParser::RuleMagic_var);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << RepoQueryParser::T__4)
      | (1ULL << RepoQueryParser::T__5)
      | (1ULL << RepoQueryParser::T__6))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

RepoQueryParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoQueryParser::ExprContext *> RepoQueryParser::ExprContext::expr() {
  return getRuleContexts<RepoQueryParser::ExprContext>();
}

RepoQueryParser::ExprContext* RepoQueryParser::ExprContext::expr(size_t i) {
  return getRuleContext<RepoQueryParser::ExprContext>(i);
}

RepoQueryParser::AtomContext* RepoQueryParser::ExprContext::atom() {
  return getRuleContext<RepoQueryParser::AtomContext>(0);
}


size_t RepoQueryParser::ExprContext::getRuleIndex() const {
  return RepoQueryParser::RuleExpr;
}


antlrcpp::Any RepoQueryParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


RepoQueryParser::ExprContext* RepoQueryParser::expr() {
   return expr(0);
}

RepoQueryParser::ExprContext* RepoQueryParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RepoQueryParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  RepoQueryParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, RepoQueryParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RepoQueryParser::T__7: {
        setState(81);
        match(RepoQueryParser::T__7);
        setState(82);
        static_cast<ExprContext *>(_localctx)->single_expr = expr(0);
        setState(83);
        match(RepoQueryParser::T__8);
        break;
      }

      case RepoQueryParser::T__4:
      case RepoQueryParser::T__5:
      case RepoQueryParser::T__6:
      case RepoQueryParser::INTEGER: {
        setState(85);
        static_cast<ExprContext *>(_localctx)->single_operand = atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(94);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left_mul_expr = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(89);
          static_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RepoQueryParser::T__9

          || _la == RepoQueryParser::T__10)) {
            static_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          static_cast<ExprContext *>(_localctx)->right_mul_exp = expr(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left_sum_expr = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(92);
          static_cast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RepoQueryParser::T__11

          || _la == RepoQueryParser::T__12)) {
            static_cast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(93);
          static_cast<ExprContext *>(_localctx)->right_sum_exp = expr(3);
          break;
        }

        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

RepoQueryParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoQueryParser::ExprContext *> RepoQueryParser::RangeContext::expr() {
  return getRuleContexts<RepoQueryParser::ExprContext>();
}

RepoQueryParser::ExprContext* RepoQueryParser::RangeContext::expr(size_t i) {
  return getRuleContext<RepoQueryParser::ExprContext>(i);
}


size_t RepoQueryParser::RangeContext::getRuleIndex() const {
  return RepoQueryParser::RuleRange;
}


antlrcpp::Any RepoQueryParser::RangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitRange(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::RangeContext* RepoQueryParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 14, RepoQueryParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    static_cast<RangeContext *>(_localctx)->left = expr(0);
    setState(100);
    match(RepoQueryParser::T__13);
    setState(101);
    match(RepoQueryParser::T__13);
    setState(102);
    static_cast<RangeContext *>(_localctx)->right = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

RepoQueryParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoQueryParser::ExprContext *> RepoQueryParser::ListContext::expr() {
  return getRuleContexts<RepoQueryParser::ExprContext>();
}

RepoQueryParser::ExprContext* RepoQueryParser::ListContext::expr(size_t i) {
  return getRuleContext<RepoQueryParser::ExprContext>(i);
}


size_t RepoQueryParser::ListContext::getRuleIndex() const {
  return RepoQueryParser::RuleList;
}


antlrcpp::Any RepoQueryParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::ListContext* RepoQueryParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 16, RepoQueryParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(RepoQueryParser::T__14);
    setState(105);
    expr(0);
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoQueryParser::T__1) {
      setState(106);
      match(RepoQueryParser::T__1);
      setState(107);
      expr(0);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    match(RepoQueryParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reg_expContext ------------------------------------------------------------------

RepoQueryParser::Reg_expContext::Reg_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RepoQueryParser::Reg_expContext::getRuleIndex() const {
  return RepoQueryParser::RuleReg_exp;
}


antlrcpp::Any RepoQueryParser::Reg_expContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitReg_exp(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::Reg_expContext* RepoQueryParser::reg_exp() {
  Reg_expContext *_localctx = _tracker.createInstance<Reg_expContext>(_ctx, getState());
  enterRule(_localctx, 18, RepoQueryParser::RuleReg_exp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(RepoQueryParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Filter_tokenContext ------------------------------------------------------------------

RepoQueryParser::Filter_tokenContext::Filter_tokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RepoQueryParser::Filter_tokenContext::FILTER_WORD() {
  return getTokens(RepoQueryParser::FILTER_WORD);
}

tree::TerminalNode* RepoQueryParser::Filter_tokenContext::FILTER_WORD(size_t i) {
  return getToken(RepoQueryParser::FILTER_WORD, i);
}


size_t RepoQueryParser::Filter_tokenContext::getRuleIndex() const {
  return RepoQueryParser::RuleFilter_token;
}


antlrcpp::Any RepoQueryParser::Filter_tokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitFilter_token(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::Filter_tokenContext* RepoQueryParser::filter_token() {
  Filter_tokenContext *_localctx = _tracker.createInstance<Filter_tokenContext>(_ctx, getState());
  enterRule(_localctx, 20, RepoQueryParser::RuleFilter_token);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      match(RepoQueryParser::FILTER_WORD);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(118);
      static_cast<Filter_tokenContext *>(_localctx)->base = match(RepoQueryParser::FILTER_WORD);

      setState(119);
      match(RepoQueryParser::T__7);
      setState(120);
      static_cast<Filter_tokenContext *>(_localctx)->from = match(RepoQueryParser::FILTER_WORD);
      setState(121);
      match(RepoQueryParser::T__16);
      setState(122);
      static_cast<Filter_tokenContext *>(_localctx)->to = match(RepoQueryParser::FILTER_WORD);
      setState(123);
      match(RepoQueryParser::T__8);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      static_cast<Filter_tokenContext *>(_localctx)->base = match(RepoQueryParser::FILTER_WORD);

      setState(125);
      match(RepoQueryParser::T__7);
      setState(126);
      match(RepoQueryParser::T__16);
      setState(127);
      static_cast<Filter_tokenContext *>(_localctx)->to = match(RepoQueryParser::FILTER_WORD);
      setState(128);
      match(RepoQueryParser::T__8);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterContext ------------------------------------------------------------------

RepoQueryParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoQueryParser::Filter_tokenContext *> RepoQueryParser::FilterContext::filter_token() {
  return getRuleContexts<RepoQueryParser::Filter_tokenContext>();
}

RepoQueryParser::Filter_tokenContext* RepoQueryParser::FilterContext::filter_token(size_t i) {
  return getRuleContext<RepoQueryParser::Filter_tokenContext>(i);
}


size_t RepoQueryParser::FilterContext::getRuleIndex() const {
  return RepoQueryParser::RuleFilter;
}


antlrcpp::Any RepoQueryParser::FilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = static_cast<RepoQueryVisitor*>(visitor))
    return parserVisitor->visitFilter(this);
  else
    return visitor->visitChildren(this);
}

RepoQueryParser::FilterContext* RepoQueryParser::filter() {
  FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, getState());
  enterRule(_localctx, 22, RepoQueryParser::RuleFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      filter_token();
      setState(132);
      match(RepoQueryParser::T__13);
      setState(133);
      filter_token();
      setState(134);
      match(RepoQueryParser::T__13);
      setState(135);
      filter_token();
      setState(136);
      match(RepoQueryParser::T__13);
      setState(137);
      filter_token();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      filter_token();
      setState(140);
      match(RepoQueryParser::T__13);
      setState(141);
      filter_token();
      setState(142);
      match(RepoQueryParser::T__13);
      setState(143);
      filter_token();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(145);
      filter_token();
      setState(146);
      match(RepoQueryParser::T__13);
      setState(147);
      filter_token();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(149);
      filter_token();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool RepoQueryParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(static_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RepoQueryParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> RepoQueryParser::_decisionToDFA;
atn::PredictionContextCache RepoQueryParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RepoQueryParser::_atn;
std::vector<uint16_t> RepoQueryParser::_serializedATN;

std::vector<std::string> RepoQueryParser::_ruleNames = {
  "query", "key", "atom", "index", "list_of_parent_indexes", "magic_var", 
  "expr", "range", "list", "reg_exp", "filter_token", "filter"
};

std::vector<std::string> RepoQueryParser::_literalNames = {
  "", "':'", "','", "'['", "']'", "'STEP_N'", "'ITERATION_N'", "'RAND_N'", 
  "'('", "')'", "'*'", "'/'", "'+'", "'-'", "'.'", "'{'", "'}'", "'>'"
};

std::vector<std::string> RepoQueryParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "INTEGER", "WS", "FILTER_WORD"
};

dfa::Vocabulary RepoQueryParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RepoQueryParser::_tokenNames;

RepoQueryParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x16, 0x9b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x24, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x27, 0xb, 0x2, 0x5, 0x2, 0x29, 
    0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x2d, 0xa, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x32, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x41, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x45, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x4a, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x4d, 0xb, 0x6, 0x5, 0x6, 0x4f, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x59, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x61, 0xa, 0x8, 0xc, 0x8, 
    0xe, 0x8, 0x64, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x6f, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x72, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x84, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x99, 0xa, 0xd, 0x3, 0xd, 0x2, 0x3, 0xe, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 0x5, 0x3, 0x2, 0x7, 0x9, 
    0x3, 0x2, 0xc, 0xd, 0x3, 0x2, 0xe, 0xf, 0x2, 0xa2, 0x2, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x58, 0x3, 0x2, 0x2, 0x2, 0x10, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 0x2, 0x2, 0x18, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x1c, 0x7, 0x2, 0x2, 0x3, 
    0x1c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x4, 0x3, 0x2, 0x1e, 
    0x28, 0x7, 0x3, 0x2, 0x2, 0x1f, 0x29, 0x5, 0x18, 0xd, 0x2, 0x20, 0x25, 
    0x5, 0x18, 0xd, 0x2, 0x21, 0x22, 0x7, 0x4, 0x2, 0x2, 0x22, 0x24, 0x5, 
    0x18, 0xd, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x20, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x2, 0x2, 0x3, 0x2b, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 0x7, 0x5, 
    0x2, 0x2, 0x2f, 0x32, 0x5, 0x8, 0x5, 0x2, 0x30, 0x32, 0x5, 0x14, 0xb, 
    0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x5, 0x2, 0x2, 0x34, 
    0x35, 0x5, 0xa, 0x6, 0x2, 0x35, 0x36, 0x7, 0x6, 0x2, 0x2, 0x36, 0x37, 
    0x7, 0x6, 0x2, 0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x7, 
    0x14, 0x2, 0x2, 0x39, 0x3b, 0x5, 0xc, 0x7, 0x2, 0x3a, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x41, 0x5, 0x6, 0x4, 0x2, 0x3d, 0x41, 0x5, 0x10, 0x9, 0x2, 
    0x3e, 0x41, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x41, 0x5, 0xe, 0x8, 0x2, 0x40, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x45, 0x5, 0x8, 0x5, 0x2, 0x43, 0x45, 0x5, 0x14, 
    0xb, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4b, 0x5, 0x8, 0x5, 0x2, 
    0x47, 0x48, 0x7, 0x4, 0x2, 0x2, 0x48, 0x4a, 0x5, 0x8, 0x5, 0x2, 0x49, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x9, 0x2, 0x2, 0x2, 0x51, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x8, 0x8, 0x1, 0x2, 0x53, 0x54, 0x7, 0xa, 0x2, 0x2, 0x54, 
    0x55, 0x5, 0xe, 0x8, 0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 0x2, 0x56, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x5, 0x6, 0x4, 0x2, 0x58, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x5b, 0xc, 0x5, 0x2, 0x2, 0x5b, 0x5c, 0x9, 0x3, 0x2, 
    0x2, 0x5c, 0x61, 0x5, 0xe, 0x8, 0x6, 0x5d, 0x5e, 0xc, 0x4, 0x2, 0x2, 
    0x5e, 0x5f, 0x9, 0x4, 0x2, 0x2, 0x5f, 0x61, 0x5, 0xe, 0x8, 0x5, 0x60, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0xf, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x5, 0xe, 0x8, 0x2, 0x66, 0x67, 0x7, 0x10, 0x2, 
    0x2, 0x67, 0x68, 0x7, 0x10, 0x2, 0x2, 0x68, 0x69, 0x5, 0xe, 0x8, 0x2, 
    0x69, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x11, 0x2, 0x2, 0x6b, 
    0x70, 0x5, 0xe, 0x8, 0x2, 0x6c, 0x6d, 0x7, 0x4, 0x2, 0x2, 0x6d, 0x6f, 
    0x5, 0xe, 0x8, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x74, 0x7, 0x12, 0x2, 0x2, 0x74, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x76, 0x7, 0xc, 0x2, 0x2, 0x76, 0x15, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x84, 0x7, 0x16, 0x2, 0x2, 0x78, 0x79, 0x7, 0x16, 0x2, 0x2, 0x79, 0x7a, 
    0x7, 0xa, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x16, 0x2, 0x2, 0x7b, 0x7c, 0x7, 
    0x13, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x16, 0x2, 0x2, 0x7d, 0x84, 0x7, 0xb, 
    0x2, 0x2, 0x7e, 0x7f, 0x7, 0x16, 0x2, 0x2, 0x7f, 0x80, 0x7, 0xa, 0x2, 
    0x2, 0x80, 0x81, 0x7, 0x13, 0x2, 0x2, 0x81, 0x82, 0x7, 0x16, 0x2, 0x2, 
    0x82, 0x84, 0x7, 0xb, 0x2, 0x2, 0x83, 0x77, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x84, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x5, 0x16, 0xc, 0x2, 0x86, 0x87, 0x7, 
    0x10, 0x2, 0x2, 0x87, 0x88, 0x5, 0x16, 0xc, 0x2, 0x88, 0x89, 0x7, 0x10, 
    0x2, 0x2, 0x89, 0x8a, 0x5, 0x16, 0xc, 0x2, 0x8a, 0x8b, 0x7, 0x10, 0x2, 
    0x2, 0x8b, 0x8c, 0x5, 0x16, 0xc, 0x2, 0x8c, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x8f, 0x7, 0x10, 0x2, 0x2, 0x8f, 
    0x90, 0x5, 0x16, 0xc, 0x2, 0x90, 0x91, 0x7, 0x10, 0x2, 0x2, 0x91, 0x92, 
    0x5, 0x16, 0xc, 0x2, 0x92, 0x99, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x5, 
    0x16, 0xc, 0x2, 0x94, 0x95, 0x7, 0x10, 0x2, 0x2, 0x95, 0x96, 0x5, 0x16, 
    0xc, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x5, 0x16, 0xc, 
    0x2, 0x98, 0x85, 0x3, 0x2, 0x2, 0x2, 0x98, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x93, 0x3, 0x2, 0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x11, 0x25, 0x28, 0x2c, 0x31, 0x3a, 0x40, 
    0x44, 0x4b, 0x4e, 0x58, 0x60, 0x62, 0x70, 0x83, 0x98, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RepoQueryParser::Initializer RepoQueryParser::_init;
