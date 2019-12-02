// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class RepoKeyParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		INTEGER=10, WS=11;
	public static final int
		RULE_key = 0, RULE_index = 1, RULE_parent_index = 2, RULE_magic_var = 3, 
		RULE_mul_exp = 4, RULE_sum_exp = 5, RULE_range = 6, RULE_reg_exp = 7;
	private static String[] makeRuleNames() {
		return new String[] {
			"key", "index", "parent_index", "magic_var", "mul_exp", "sum_exp", "range", 
			"reg_exp"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'['", "','", "']'", "'N'", "'*'", "'/'", "'+'", "'-'", "':'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "INTEGER", 
			"WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "RepoKey.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public RepoKeyParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class KeyContext extends ParserRuleContext {
		public IndexContext index() {
			return getRuleContext(IndexContext.class,0);
		}
		public List<Parent_indexContext> parent_index() {
			return getRuleContexts(Parent_indexContext.class);
		}
		public Parent_indexContext parent_index(int i) {
			return getRuleContext(Parent_indexContext.class,i);
		}
		public KeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterKey(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitKey(this);
		}
	}

	public final KeyContext key() throws RecognitionException {
		KeyContext _localctx = new KeyContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_key);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(16);
			match(T__0);
			setState(17);
			index();
			setState(18);
			match(T__0);
			setState(28);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				{
				setState(19);
				parent_index();
				}
				break;
			case 2:
				{
				{
				setState(20);
				parent_index();
				setState(25);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(21);
					match(T__1);
					setState(22);
					parent_index();
					}
					}
					setState(27);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				break;
			}
			setState(30);
			match(T__2);
			setState(31);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(RepoKeyParser.INTEGER, 0); }
		public RangeContext range() {
			return getRuleContext(RangeContext.class,0);
		}
		public Mul_expContext mul_exp() {
			return getRuleContext(Mul_expContext.class,0);
		}
		public Sum_expContext sum_exp() {
			return getRuleContext(Sum_expContext.class,0);
		}
		public Reg_expContext reg_exp() {
			return getRuleContext(Reg_expContext.class,0);
		}
		public Magic_varContext magic_var() {
			return getRuleContext(Magic_varContext.class,0);
		}
		public IndexContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterIndex(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitIndex(this);
		}
	}

	public final IndexContext index() throws RecognitionException {
		IndexContext _localctx = new IndexContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_index);
		try {
			setState(39);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(33);
				match(INTEGER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(34);
				range();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(35);
				mul_exp();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(36);
				sum_exp();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(37);
				reg_exp();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(38);
				magic_var();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Parent_indexContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(RepoKeyParser.INTEGER, 0); }
		public RangeContext range() {
			return getRuleContext(RangeContext.class,0);
		}
		public Mul_expContext mul_exp() {
			return getRuleContext(Mul_expContext.class,0);
		}
		public Sum_expContext sum_exp() {
			return getRuleContext(Sum_expContext.class,0);
		}
		public Reg_expContext reg_exp() {
			return getRuleContext(Reg_expContext.class,0);
		}
		public Magic_varContext magic_var() {
			return getRuleContext(Magic_varContext.class,0);
		}
		public Parent_indexContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parent_index; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterParent_index(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitParent_index(this);
		}
	}

	public final Parent_indexContext parent_index() throws RecognitionException {
		Parent_indexContext _localctx = new Parent_indexContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_parent_index);
		try {
			setState(47);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(41);
				match(INTEGER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(42);
				range();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(43);
				mul_exp();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(44);
				sum_exp();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(45);
				reg_exp();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(46);
				magic_var();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Magic_varContext extends ParserRuleContext {
		public Magic_varContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_magic_var; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterMagic_var(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitMagic_var(this);
		}
	}

	public final Magic_varContext magic_var() throws RecognitionException {
		Magic_varContext _localctx = new Magic_varContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_magic_var);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mul_expContext extends ParserRuleContext {
		public List<TerminalNode> INTEGER() { return getTokens(RepoKeyParser.INTEGER); }
		public TerminalNode INTEGER(int i) {
			return getToken(RepoKeyParser.INTEGER, i);
		}
		public List<Magic_varContext> magic_var() {
			return getRuleContexts(Magic_varContext.class);
		}
		public Magic_varContext magic_var(int i) {
			return getRuleContext(Magic_varContext.class,i);
		}
		public Mul_expContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mul_exp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterMul_exp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitMul_exp(this);
		}
	}

	public final Mul_expContext mul_exp() throws RecognitionException {
		Mul_expContext _localctx = new Mul_expContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_mul_exp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
				{
				setState(51);
				match(INTEGER);
				}
				break;
			case T__3:
				{
				setState(52);
				magic_var();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(62);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4 || _la==T__5) {
				{
				{
				setState(55);
				_la = _input.LA(1);
				if ( !(_la==T__4 || _la==T__5) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(58);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case INTEGER:
					{
					setState(56);
					match(INTEGER);
					}
					break;
				case T__3:
					{
					setState(57);
					magic_var();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(64);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Sum_expContext extends ParserRuleContext {
		public List<Mul_expContext> mul_exp() {
			return getRuleContexts(Mul_expContext.class);
		}
		public Mul_expContext mul_exp(int i) {
			return getRuleContext(Mul_expContext.class,i);
		}
		public Sum_expContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sum_exp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterSum_exp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitSum_exp(this);
		}
	}

	public final Sum_expContext sum_exp() throws RecognitionException {
		Sum_expContext _localctx = new Sum_expContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_sum_exp);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			mul_exp();
			setState(70);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__6 || _la==T__7) {
				{
				{
				setState(66);
				_la = _input.LA(1);
				if ( !(_la==T__6 || _la==T__7) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(67);
				mul_exp();
				}
				}
				setState(72);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RangeContext extends ParserRuleContext {
		public List<Sum_expContext> sum_exp() {
			return getRuleContexts(Sum_expContext.class);
		}
		public Sum_expContext sum_exp(int i) {
			return getRuleContext(Sum_expContext.class,i);
		}
		public List<Mul_expContext> mul_exp() {
			return getRuleContexts(Mul_expContext.class);
		}
		public Mul_expContext mul_exp(int i) {
			return getRuleContext(Mul_expContext.class,i);
		}
		public RangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterRange(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitRange(this);
		}
	}

	public final RangeContext range() throws RecognitionException {
		RangeContext _localctx = new RangeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_range);
		try {
			setState(81);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(73);
				sum_exp();
				setState(74);
				match(T__8);
				setState(75);
				sum_exp();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(77);
				mul_exp();
				setState(78);
				match(T__8);
				setState(79);
				mul_exp();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Reg_expContext extends ParserRuleContext {
		public Reg_expContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reg_exp; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).enterReg_exp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof RepoKeyListener ) ((RepoKeyListener)listener).exitReg_exp(this);
		}
	}

	public final Reg_expContext reg_exp() throws RecognitionException {
		Reg_expContext _localctx = new Reg_expContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_reg_exp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\rX\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\2\7\2\32\n\2\f\2\16\2\35\13\2\5\2\37\n\2\3\2\3\2\3\2\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\5\3*\n\3\3\4\3\4\3\4\3\4\3\4\3\4\5\4\62\n\4\3\5\3\5\3\6"+
		"\3\6\5\68\n\6\3\6\3\6\3\6\5\6=\n\6\7\6?\n\6\f\6\16\6B\13\6\3\7\3\7\3\7"+
		"\7\7G\n\7\f\7\16\7J\13\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\bT\n\b\3\t"+
		"\3\t\3\t\2\2\n\2\4\6\b\n\f\16\20\2\4\3\2\7\b\3\2\t\n\2`\2\22\3\2\2\2\4"+
		")\3\2\2\2\6\61\3\2\2\2\b\63\3\2\2\2\n\67\3\2\2\2\fC\3\2\2\2\16S\3\2\2"+
		"\2\20U\3\2\2\2\22\23\7\3\2\2\23\24\5\4\3\2\24\36\7\3\2\2\25\37\5\6\4\2"+
		"\26\33\5\6\4\2\27\30\7\4\2\2\30\32\5\6\4\2\31\27\3\2\2\2\32\35\3\2\2\2"+
		"\33\31\3\2\2\2\33\34\3\2\2\2\34\37\3\2\2\2\35\33\3\2\2\2\36\25\3\2\2\2"+
		"\36\26\3\2\2\2\37 \3\2\2\2 !\7\5\2\2!\"\7\5\2\2\"\3\3\2\2\2#*\7\f\2\2"+
		"$*\5\16\b\2%*\5\n\6\2&*\5\f\7\2\'*\5\20\t\2(*\5\b\5\2)#\3\2\2\2)$\3\2"+
		"\2\2)%\3\2\2\2)&\3\2\2\2)\'\3\2\2\2)(\3\2\2\2*\5\3\2\2\2+\62\7\f\2\2,"+
		"\62\5\16\b\2-\62\5\n\6\2.\62\5\f\7\2/\62\5\20\t\2\60\62\5\b\5\2\61+\3"+
		"\2\2\2\61,\3\2\2\2\61-\3\2\2\2\61.\3\2\2\2\61/\3\2\2\2\61\60\3\2\2\2\62"+
		"\7\3\2\2\2\63\64\7\6\2\2\64\t\3\2\2\2\658\7\f\2\2\668\5\b\5\2\67\65\3"+
		"\2\2\2\67\66\3\2\2\28@\3\2\2\29<\t\2\2\2:=\7\f\2\2;=\5\b\5\2<:\3\2\2\2"+
		"<;\3\2\2\2=?\3\2\2\2>9\3\2\2\2?B\3\2\2\2@>\3\2\2\2@A\3\2\2\2A\13\3\2\2"+
		"\2B@\3\2\2\2CH\5\n\6\2DE\t\3\2\2EG\5\n\6\2FD\3\2\2\2GJ\3\2\2\2HF\3\2\2"+
		"\2HI\3\2\2\2I\r\3\2\2\2JH\3\2\2\2KL\5\f\7\2LM\7\13\2\2MN\5\f\7\2NT\3\2"+
		"\2\2OP\5\n\6\2PQ\7\13\2\2QR\5\n\6\2RT\3\2\2\2SK\3\2\2\2SO\3\2\2\2T\17"+
		"\3\2\2\2UV\7\7\2\2V\21\3\2\2\2\13\33\36)\61\67<@HS";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}