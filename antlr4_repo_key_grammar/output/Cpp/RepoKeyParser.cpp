
// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2


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

std::vector<RepoKeyParser::Parent_indexContext *> RepoKeyParser::KeyContext::parent_index() {
  return getRuleContexts<RepoKeyParser::Parent_indexContext>();
}

RepoKeyParser::Parent_indexContext* RepoKeyParser::KeyContext::parent_index(size_t i) {
  return getRuleContext<RepoKeyParser::Parent_indexContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(RepoKeyParser::T__0);
    setState(17);
    index();
    setState(18);
    match(RepoKeyParser::T__0);
    setState(28);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(19);
      parent_index();
      break;
    }

    case 2: {
      setState(20);
      parent_index();
      setState(25);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RepoKeyParser::T__1) {
        setState(21);
        match(RepoKeyParser::T__1);
        setState(22);
        parent_index();
        setState(27);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
    setState(30);
    match(RepoKeyParser::T__2);
    setState(31);
    match(RepoKeyParser::T__2);
   
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
    setState(39);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(33);
      match(RepoKeyParser::INTEGER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(34);
      range();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(35);
      mul_exp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(36);
      sum_exp();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(37);
      reg_exp();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(38);
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
  enterRule(_localctx, 4, RepoKeyParser::RuleParent_index);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(41);
      match(RepoKeyParser::INTEGER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      range();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(43);
      mul_exp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(44);
      sum_exp();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(45);
      reg_exp();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(46);
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
  enterRule(_localctx, 6, RepoKeyParser::RuleMagic_var);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
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
  enterRule(_localctx, 8, RepoKeyParser::RuleMul_exp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RepoKeyParser::INTEGER: {
        setState(51);
        match(RepoKeyParser::INTEGER);
        break;
      }

      case RepoKeyParser::T__3: {
        setState(52);
        magic_var();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoKeyParser::T__4

    || _la == RepoKeyParser::T__5) {
      setState(55);
      _la = _input->LA(1);
      if (!(_la == RepoKeyParser::T__4

      || _la == RepoKeyParser::T__5)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(58);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RepoKeyParser::INTEGER: {
          setState(56);
          match(RepoKeyParser::INTEGER);
          break;
        }

        case RepoKeyParser::T__3: {
          setState(57);
          magic_var();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(64);
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
  enterRule(_localctx, 10, RepoKeyParser::RuleSum_exp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    mul_exp();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RepoKeyParser::T__6

    || _la == RepoKeyParser::T__7) {
      setState(66);
      _la = _input->LA(1);
      if (!(_la == RepoKeyParser::T__6

      || _la == RepoKeyParser::T__7)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(67);
      mul_exp();
      setState(72);
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
  enterRule(_localctx, 12, RepoKeyParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(73);
      sum_exp();
      setState(74);
      match(RepoKeyParser::T__8);
      setState(75);
      sum_exp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      mul_exp();
      setState(78);
      match(RepoKeyParser::T__8);
      setState(79);
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
  enterRule(_localctx, 14, RepoKeyParser::RuleReg_exp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
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
  "key", "index", "parent_index", "magic_var", "mul_exp", "sum_exp", "range", 
  "reg_exp"
};

std::vector<std::string> RepoKeyParser::_literalNames = {
  "", "'['", "','", "']'", "'N'", "'*'", "'/'", "'+'", "'-'", "':'"
};

std::vector<std::string> RepoKeyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "INTEGER", "WS"
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
    0x3, 0xd, 0x58, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x1a, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x1d, 0xb, 0x2, 0x5, 0x2, 0x1f, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x2a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x32, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x38, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x3d, 0xa, 0x6, 0x7, 0x6, 0x3f, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x42, 
    0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x47, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x4a, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x54, 0xa, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x2, 0x2, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x2, 0x4, 0x3, 0x2, 0x7, 0x8, 0x3, 0x2, 0x9, 0xa, 0x2, 0x60, 
    0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 0x4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x6, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x43, 0x3, 0x2, 0x2, 0x2, 0xe, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x55, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0x3, 0x2, 0x2, 0x13, 
    0x14, 0x5, 0x4, 0x3, 0x2, 0x14, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x15, 0x1f, 
    0x5, 0x6, 0x4, 0x2, 0x16, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x17, 0x18, 0x7, 
    0x4, 0x2, 0x2, 0x18, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x19, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 
    0x7, 0x5, 0x2, 0x2, 0x21, 0x22, 0x7, 0x5, 0x2, 0x2, 0x22, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x2a, 0x7, 0xc, 0x2, 0x2, 0x24, 0x2a, 0x5, 0xe, 
    0x8, 0x2, 0x25, 0x2a, 0x5, 0xa, 0x6, 0x2, 0x26, 0x2a, 0x5, 0xc, 0x7, 
    0x2, 0x27, 0x2a, 0x5, 0x10, 0x9, 0x2, 0x28, 0x2a, 0x5, 0x8, 0x5, 0x2, 
    0x29, 0x23, 0x3, 0x2, 0x2, 0x2, 0x29, 0x24, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x32, 0x7, 0xc, 0x2, 0x2, 0x2c, 0x32, 0x5, 0xe, 
    0x8, 0x2, 0x2d, 0x32, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x32, 0x5, 0xc, 0x7, 
    0x2, 0x2f, 0x32, 0x5, 0x10, 0x9, 0x2, 0x30, 0x32, 0x5, 0x8, 0x5, 0x2, 
    0x31, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x6, 0x2, 0x2, 0x34, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x38, 0x7, 0xc, 0x2, 0x2, 0x36, 0x38, 0x5, 0x8, 0x5, 
    0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x40, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x9, 0x2, 0x2, 0x2, 0x3a, 
    0x3d, 0x7, 0xc, 0x2, 0x2, 0x3b, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3c, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0xb, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x48, 0x5, 0xa, 0x6, 0x2, 0x44, 0x45, 0x9, 0x3, 0x2, 0x2, 0x45, 
    0x47, 0x5, 0xa, 0x6, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x4d, 0x7, 0xb, 0x2, 
    0x2, 0x4d, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4e, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x5, 0xa, 0x6, 0x2, 0x50, 0x51, 0x7, 0xb, 0x2, 0x2, 0x51, 
    0x52, 0x5, 0xa, 0x6, 0x2, 0x52, 0x54, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x54, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x7, 0x2, 0x2, 0x56, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0x1b, 0x1e, 0x29, 0x31, 0x37, 0x3c, 0x40, 0x48, 0x53, 
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
