
// Generated from /home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/RepoKey.g4 by ANTLR 4.7.2


#include "RepoKeyListener.h"

#include "RepoKeyParser.h"


using namespace antlrcpp;
using namespace antlr4;

RepoKeyParser::RepoKeyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

RepoKeyParser::~RepoKeyParser() {
  delete _interpreter;
}

std::string RepoKeyParser::getGrammarFileName() const {
  return "RepoKey.g4";
}

const std::vector<std::string>& RepoKeyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& RepoKeyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KeyContext ------------------------------------------------------------------

RepoKeyParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RepoKeyParser::IndexContext* RepoKeyParser::KeyContext::index() {
  return getRuleContext<RepoKeyParser::IndexContext>(0);
}

RepoKeyParser::List_of_parent_indexesContext* RepoKeyParser::KeyContext::list_of_parent_indexes() {
  return getRuleContext<RepoKeyParser::List_of_parent_indexesContext>(0);
}


size_t RepoKeyParser::KeyContext::getRuleIndex() const {
  return RepoKeyParser::RuleKey;
}

void RepoKeyParser::KeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey(this);
}

void RepoKeyParser::KeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey(this);
}

RepoKeyParser::KeyContext* RepoKeyParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 0, RepoKeyParser::RuleKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(RepoKeyParser::T__0);
    setState(21);
    index();
    setState(22);
    match(RepoKeyParser::T__0);
    setState(23);
    list_of_parent_indexes();
    setState(24);
    match(RepoKeyParser::T__1);
    setState(25);
    match(RepoKeyParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

RepoKeyParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RepoKeyParser::IndexContext::INTEGER() {
  return getToken(RepoKeyParser::INTEGER, 0);
}

RepoKeyParser::RangeContext* RepoKeyParser::IndexContext::range() {
  return getRuleContext<RepoKeyParser::RangeContext>(0);
}

RepoKeyParser::ListContext* RepoKeyParser::IndexContext::list() {
  return getRuleContext<RepoKeyParser::ListContext>(0);
}

RepoKeyParser::Mul_expContext* RepoKeyParser::IndexContext::mul_exp() {
  return getRuleContext<RepoKeyParser::Mul_expContext>(0);
}

RepoKeyParser::Sum_expContext* RepoKeyParser::IndexContext::sum_exp() {
  return getRuleContext<RepoKeyParser::Sum_expContext>(0);
}

RepoKeyParser::Reg_expContext* RepoKeyParser::IndexContext::reg_exp() {
  return getRuleContext<RepoKeyParser::Reg_expContext>(0);
}

RepoKeyParser::Magic_varContext* RepoKeyParser::IndexContext::magic_var() {
  return getRuleContext<RepoKeyParser::Magic_varContext>(0);
}


size_t RepoKeyParser::IndexContext::getRuleIndex() const {
  return RepoKeyParser::RuleIndex;
}

void RepoKeyParser::IndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex(this);
}

void RepoKeyParser::IndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex(this);
}

RepoKeyParser::IndexContext* RepoKeyParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 2, RepoKeyParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      match(RepoKeyParser::INTEGER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
      range();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(29);
      list();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(30);
      mul_exp();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(31);
      sum_exp();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(32);
      reg_exp();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(33);
      magic_var();
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

RepoKeyParser::List_of_parent_indexesContext::List_of_parent_indexesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoKeyParser::Parent_indexContext *> RepoKeyParser::List_of_parent_indexesContext::parent_index() {
  return getRuleContexts<RepoKeyParser::Parent_indexContext>();
}

RepoKeyParser::Parent_indexContext* RepoKeyParser::List_of_parent_indexesContext::parent_index(size_t i) {
  return getRuleContext<RepoKeyParser::Parent_indexContext>(i);
}


size_t RepoKeyParser::List_of_parent_indexesContext::getRuleIndex() const {
  return RepoKeyParser::RuleList_of_parent_indexes;
}

void RepoKeyParser::List_of_parent_indexesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_of_parent_indexes(this);
}

void RepoKeyParser::List_of_parent_indexesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_of_parent_indexes(this);
}

RepoKeyParser::List_of_parent_indexesContext* RepoKeyParser::list_of_parent_indexes() {
  List_of_parent_indexesContext *_localctx = _tracker.createInstance<List_of_parent_indexesContext>(_ctx, getState());
  enterRule(_localctx, 4, RepoKeyParser::RuleList_of_parent_indexes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(36);
      parent_index();
      break;
    }

    case 2: {
      setState(37);
      parent_index();
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RepoKeyParser::T__2) {
        setState(38);
        match(RepoKeyParser::T__2);
        setState(39);
        parent_index();
        setState(44);
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

//----------------- Parent_indexContext ------------------------------------------------------------------

RepoKeyParser::Parent_indexContext::Parent_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RepoKeyParser::Parent_indexContext::INTEGER() {
  return getToken(RepoKeyParser::INTEGER, 0);
}

RepoKeyParser::RangeContext* RepoKeyParser::Parent_indexContext::range() {
  return getRuleContext<RepoKeyParser::RangeContext>(0);
}

RepoKeyParser::Mul_expContext* RepoKeyParser::Parent_indexContext::mul_exp() {
  return getRuleContext<RepoKeyParser::Mul_expContext>(0);
}

RepoKeyParser::Sum_expContext* RepoKeyParser::Parent_indexContext::sum_exp() {
  return getRuleContext<RepoKeyParser::Sum_expContext>(0);
}

RepoKeyParser::Reg_expContext* RepoKeyParser::Parent_indexContext::reg_exp() {
  return getRuleContext<RepoKeyParser::Reg_expContext>(0);
}

RepoKeyParser::Magic_varContext* RepoKeyParser::Parent_indexContext::magic_var() {
  return getRuleContext<RepoKeyParser::Magic_varContext>(0);
}


size_t RepoKeyParser::Parent_indexContext::getRuleIndex() const {
  return RepoKeyParser::RuleParent_index;
}

void RepoKeyParser::Parent_indexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParent_index(this);
}

void RepoKeyParser::Parent_indexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParent_index(this);
}

RepoKeyParser::Parent_indexContext* RepoKeyParser::parent_index() {
  Parent_indexContext *_localctx = _tracker.createInstance<Parent_indexContext>(_ctx, getState());
  enterRule(_localctx, 6, RepoKeyParser::RuleParent_index);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      match(RepoKeyParser::INTEGER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      range();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(49);
      mul_exp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(50);
      sum_exp();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(51);
      reg_exp();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(52);
      magic_var();
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

RepoKeyParser::Magic_varContext::Magic_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RepoKeyParser::Magic_varContext::getRuleIndex() const {
  return RepoKeyParser::RuleMagic_var;
}

void RepoKeyParser::Magic_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMagic_var(this);
}

void RepoKeyParser::Magic_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMagic_var(this);
}

RepoKeyParser::Magic_varContext* RepoKeyParser::magic_var() {
  Magic_varContext *_localctx = _tracker.createInstance<Magic_varContext>(_ctx, getState());
  enterRule(_localctx, 8, RepoKeyParser::RuleMagic_var);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(RepoKeyParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_expContext ------------------------------------------------------------------

RepoKeyParser::Mul_expContext::Mul_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RepoKeyParser::Mul_expContext::INTEGER() {
  return getTokens(RepoKeyParser::INTEGER);
}

tree::TerminalNode* RepoKeyParser::Mul_expContext::INTEGER(size_t i) {
  return getToken(RepoKeyParser::INTEGER, i);
}

std::vector<RepoKeyParser::Magic_varContext *> RepoKeyParser::Mul_expContext::magic_var() {
  return getRuleContexts<RepoKeyParser::Magic_varContext>();
}

RepoKeyParser::Magic_varContext* RepoKeyParser::Mul_expContext::magic_var(size_t i) {
  return getRuleContext<RepoKeyParser::Magic_varContext>(i);
}


size_t RepoKeyParser::Mul_expContext::getRuleIndex() const {
  return RepoKeyParser::RuleMul_exp;
}

void RepoKeyParser::Mul_expContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_exp(this);
}

void RepoKeyParser::Mul_expContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_exp(this);
}

RepoKeyParser::Mul_expContext* RepoKeyParser::mul_exp() {
  Mul_expContext *_localctx = _tracker.createInstance<Mul_expContext>(_ctx, getState());
  enterRule(_localctx, 10, RepoKeyParser::RuleMul_exp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RepoKeyParser::INTEGER: {
        setState(57);
        match(RepoKeyParser::INTEGER);
        break;
      }

      case RepoKeyParser::T__3: {
        setState(58);
        magic_var();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoKeyParser::T__4

    || _la == RepoKeyParser::T__5) {
      setState(61);
      _la = _input->LA(1);
      if (!(_la == RepoKeyParser::T__4

      || _la == RepoKeyParser::T__5)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(64);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RepoKeyParser::INTEGER: {
          setState(62);
          match(RepoKeyParser::INTEGER);
          break;
        }

        case RepoKeyParser::T__3: {
          setState(63);
          magic_var();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sum_expContext ------------------------------------------------------------------

RepoKeyParser::Sum_expContext::Sum_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoKeyParser::Mul_expContext *> RepoKeyParser::Sum_expContext::mul_exp() {
  return getRuleContexts<RepoKeyParser::Mul_expContext>();
}

RepoKeyParser::Mul_expContext* RepoKeyParser::Sum_expContext::mul_exp(size_t i) {
  return getRuleContext<RepoKeyParser::Mul_expContext>(i);
}


size_t RepoKeyParser::Sum_expContext::getRuleIndex() const {
  return RepoKeyParser::RuleSum_exp;
}

void RepoKeyParser::Sum_expContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSum_exp(this);
}

void RepoKeyParser::Sum_expContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSum_exp(this);
}

RepoKeyParser::Sum_expContext* RepoKeyParser::sum_exp() {
  Sum_expContext *_localctx = _tracker.createInstance<Sum_expContext>(_ctx, getState());
  enterRule(_localctx, 12, RepoKeyParser::RuleSum_exp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    mul_exp();
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoKeyParser::T__6

    || _la == RepoKeyParser::T__7) {
      setState(72);
      _la = _input->LA(1);
      if (!(_la == RepoKeyParser::T__6

      || _la == RepoKeyParser::T__7)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(73);
      mul_exp();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

RepoKeyParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RepoKeyParser::Sum_expContext *> RepoKeyParser::RangeContext::sum_exp() {
  return getRuleContexts<RepoKeyParser::Sum_expContext>();
}

RepoKeyParser::Sum_expContext* RepoKeyParser::RangeContext::sum_exp(size_t i) {
  return getRuleContext<RepoKeyParser::Sum_expContext>(i);
}

std::vector<RepoKeyParser::Mul_expContext *> RepoKeyParser::RangeContext::mul_exp() {
  return getRuleContexts<RepoKeyParser::Mul_expContext>();
}

RepoKeyParser::Mul_expContext* RepoKeyParser::RangeContext::mul_exp(size_t i) {
  return getRuleContext<RepoKeyParser::Mul_expContext>(i);
}


size_t RepoKeyParser::RangeContext::getRuleIndex() const {
  return RepoKeyParser::RuleRange;
}

void RepoKeyParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void RepoKeyParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

RepoKeyParser::RangeContext* RepoKeyParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 14, RepoKeyParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      sum_exp();
      setState(80);
      match(RepoKeyParser::T__8);
      setState(81);
      match(RepoKeyParser::T__8);
      setState(82);
      sum_exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
      mul_exp();
      setState(85);
      match(RepoKeyParser::T__8);
      setState(86);
      match(RepoKeyParser::T__8);
      setState(87);
      mul_exp();
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

//----------------- ListContext ------------------------------------------------------------------

RepoKeyParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RepoKeyParser::ListContext::INTEGER() {
  return getTokens(RepoKeyParser::INTEGER);
}

tree::TerminalNode* RepoKeyParser::ListContext::INTEGER(size_t i) {
  return getToken(RepoKeyParser::INTEGER, i);
}


size_t RepoKeyParser::ListContext::getRuleIndex() const {
  return RepoKeyParser::RuleList;
}

void RepoKeyParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void RepoKeyParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

RepoKeyParser::ListContext* RepoKeyParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 16, RepoKeyParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(RepoKeyParser::T__9);
    setState(92);
    match(RepoKeyParser::INTEGER);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoKeyParser::T__2) {
      setState(93);
      match(RepoKeyParser::T__2);
      setState(94);
      match(RepoKeyParser::INTEGER);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
    match(RepoKeyParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reg_expContext ------------------------------------------------------------------

RepoKeyParser::Reg_expContext::Reg_expContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RepoKeyParser::Reg_expContext::getRuleIndex() const {
  return RepoKeyParser::RuleReg_exp;
}

void RepoKeyParser::Reg_expContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReg_exp(this);
}

void RepoKeyParser::Reg_expContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RepoKeyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReg_exp(this);
}

RepoKeyParser::Reg_expContext* RepoKeyParser::reg_exp() {
  Reg_expContext *_localctx = _tracker.createInstance<Reg_expContext>(_ctx, getState());
  enterRule(_localctx, 18, RepoKeyParser::RuleReg_exp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(RepoKeyParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> RepoKeyParser::_decisionToDFA;
atn::PredictionContextCache RepoKeyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN RepoKeyParser::_atn;
std::vector<uint16_t> RepoKeyParser::_serializedATN;

std::vector<std::string> RepoKeyParser::_ruleNames = {
  "key", "index", "list_of_parent_indexes", "parent_index", "magic_var", 
  "mul_exp", "sum_exp", "range", "list", "reg_exp"
};

std::vector<std::string> RepoKeyParser::_literalNames = {
  "", "'['", "']'", "','", "'N'", "'*'", "'/'", "'+'", "'-'", "'.'", "'{'", 
  "'}'"
};

std::vector<std::string> RepoKeyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "INTEGER", "WS"
};

dfa::Vocabulary RepoKeyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> RepoKeyParser::_tokenNames;

RepoKeyParser::Initializer::Initializer() {
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
    0x3, 0xf, 0x6b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x25, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x7, 0x4, 0x2b, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2e, 0xb, 0x4, 0x5, 0x4, 
    0x30, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x38, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x3e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x43, 
    0xa, 0x7, 0x7, 0x7, 0x45, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x48, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4d, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x50, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5c, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x62, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x65, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x2, 0x2, 0xc, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x2, 0x4, 0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x9, 0xa, 0x2, 0x73, 
    0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 0x3, 0x2, 0x2, 0x2, 0xa, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 0x3, 0x2, 0x2, 0x17, 0x18, 
    0x5, 0x4, 0x3, 0x2, 0x18, 0x19, 0x7, 0x3, 0x2, 0x2, 0x19, 0x1a, 0x5, 
    0x6, 0x4, 0x2, 0x1a, 0x1b, 0x7, 0x4, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x4, 
    0x2, 0x2, 0x1c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x25, 0x7, 0xe, 0x2, 
    0x2, 0x1e, 0x25, 0x5, 0x10, 0x9, 0x2, 0x1f, 0x25, 0x5, 0x12, 0xa, 0x2, 
    0x20, 0x25, 0x5, 0xc, 0x7, 0x2, 0x21, 0x25, 0x5, 0xe, 0x8, 0x2, 0x22, 
    0x25, 0x5, 0x14, 0xb, 0x2, 0x23, 0x25, 0x5, 0xa, 0x6, 0x2, 0x24, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x24, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x5, 0x3, 0x2, 0x2, 0x2, 0x26, 0x30, 0x5, 0x8, 0x5, 0x2, 
    0x27, 0x2c, 0x5, 0x8, 0x5, 0x2, 0x28, 0x29, 0x7, 0x5, 0x2, 0x2, 0x29, 
    0x2b, 0x5, 0x8, 0x5, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x38, 0x7, 0xe, 0x2, 0x2, 
    0x32, 0x38, 0x5, 0x10, 0x9, 0x2, 0x33, 0x38, 0x5, 0xc, 0x7, 0x2, 0x34, 
    0x38, 0x5, 0xe, 0x8, 0x2, 0x35, 0x38, 0x5, 0x14, 0xb, 0x2, 0x36, 0x38, 
    0x5, 0xa, 0x6, 0x2, 0x37, 0x31, 0x3, 0x2, 0x2, 0x2, 0x37, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 0x2, 0x2, 0x37, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x6, 0x2, 0x2, 
    0x3a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x7, 0xe, 0x2, 0x2, 0x3c, 
    0x3e, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x46, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x9, 
    0x2, 0x2, 0x2, 0x40, 0x43, 0x7, 0xe, 0x2, 0x2, 0x41, 0x43, 0x5, 0xa, 
    0x6, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0xd, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4a, 0x4b, 0x9, 
    0x3, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0xe, 0x8, 0x2, 0x52, 
    0x53, 0x7, 0xb, 0x2, 0x2, 0x53, 0x54, 0x7, 0xb, 0x2, 0x2, 0x54, 0x55, 
    0x5, 0xe, 0x8, 0x2, 0x55, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0xc, 0x7, 0x2, 0x57, 0x58, 0x7, 0xb, 0x2, 0x2, 0x58, 0x59, 0x7, 0xb, 
    0x2, 0x2, 0x59, 0x5a, 0x5, 0xc, 0x7, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xc, 0x2, 0x2, 0x5e, 
    0x63, 0x7, 0xe, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x5, 0x2, 0x2, 0x60, 0x62, 
    0x7, 0xe, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x67, 0x7, 0xd, 0x2, 0x2, 0x67, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x7, 0x7, 0x2, 0x2, 0x69, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x24, 0x2c, 0x2f, 0x37, 0x3d, 0x42, 0x46, 0x4e, 0x5b, 0x63, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

RepoKeyParser::Initializer RepoKeyParser::_init;
