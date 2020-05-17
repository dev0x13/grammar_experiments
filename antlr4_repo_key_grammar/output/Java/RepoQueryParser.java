// Generated from /media/george/HOME/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/grammars/RepoQuery.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class RepoQueryParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		INTEGER=18, WS=19, FILTER_WORD=20;
	public static final int
		RULE_query = 0, RULE_key = 1, RULE_atom = 2, RULE_index = 3, RULE_list_of_parent_indexes = 4, 
		RULE_magic_var = 5, RULE_expr = 6, RULE_range = 7, RULE_list = 8, RULE_reg_exp = 9, 
		RULE_filter_token = 10, RULE_filter = 11;
	private static String[] makeRuleNames() {
		return new String[] {
			"query", "key", "atom", "index", "list_of_parent_indexes", "magic_var", 
			"expr", "range", "list", "reg_exp", "filter_token", "filter"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'['", "']'", "'STEP_N'", "'ITERATION_N'", "'RAND_N'", 
			"'('", "')'", "'*'", "'/'", "'+'", "'-'", "'.'", "'{'", "'}'", "'>'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "INTEGER", "WS", "FILTER_WORD"
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
	public String getGrammarFileName() { return "RepoQuery.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public RepoQueryParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class QueryContext extends ParserRuleContext {
		public KeyContext key() {
			return getRuleContext(KeyContext.class,0);
		}
		public TerminalNode EOF() { return getToken(RepoQueryParser.EOF, 0); }
		public List<FilterContext> filter() {
			return getRuleContexts(FilterContext.class);
		}
		public FilterContext filter(int i) {
			return getRuleContext(FilterContext.class,i);
		}
		public QueryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitQuery(this);
			else return visitor.visitChildren(this);
		}
	}

	public final QueryContext query() throws RecognitionException {
		QueryContext _localctx = new QueryContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_query);
		int _la;
		try {
			setState(42);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(24);
				key();
				setState(25);
				match(EOF);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(27);
				key();
				setState(28);
				match(T__0);
				setState(38);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
				case 1:
					{
					setState(29);
					filter();
					}
					break;
				case 2:
					{
					{
					setState(30);
					filter();
					setState(35);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(31);
						match(T__1);
						setState(32);
						filter();
						}
						}
						setState(37);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					}
					break;
				}
				setState(40);
				match(EOF);
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

	public static class KeyContext extends ParserRuleContext {
		public List_of_parent_indexesContext list_of_parent_indexes() {
			return getRuleContext(List_of_parent_indexesContext.class,0);
		}
		public IndexContext index() {
			return getRuleContext(IndexContext.class,0);
		}
		public Reg_expContext reg_exp() {
			return getRuleContext(Reg_expContext.class,0);
		}
		public KeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_key; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitKey(this);
			else return visitor.visitChildren(this);
		}
	}

	public final KeyContext key() throws RecognitionException {
		KeyContext _localctx = new KeyContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_key);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(T__2);
			setState(47);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__14:
			case INTEGER:
				{
				setState(45);
				index();
				}
				break;
			case T__9:
				{
				setState(46);
				reg_exp();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(49);
			match(T__2);
			setState(50);
			list_of_parent_indexes();
			setState(51);
			match(T__3);
			setState(52);
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

	public static class AtomContext extends ParserRuleContext {
		public TerminalNode INTEGER() { return getToken(RepoQueryParser.INTEGER, 0); }
		public Magic_varContext magic_var() {
			return getRuleContext(Magic_varContext.class,0);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitAtom(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_atom);
		try {
			setState(56);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTEGER:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				match(INTEGER);
				}
				break;
			case T__4:
			case T__5:
			case T__6:
				enterOuterAlt(_localctx, 2);
				{
				setState(55);
				magic_var();
				}
				break;
			default:
				throw new NoViableAltException(this);
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
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public RangeContext range() {
			return getRuleContext(RangeContext.class,0);
		}
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IndexContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitIndex(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IndexContext index() throws RecognitionException {
		IndexContext _localctx = new IndexContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_index);
		try {
			setState(62);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(58);
				atom();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				range();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(60);
				list();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(61);
				expr(0);
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

	public static class List_of_parent_indexesContext extends ParserRuleContext {
		public List<IndexContext> index() {
			return getRuleContexts(IndexContext.class);
		}
		public IndexContext index(int i) {
			return getRuleContext(IndexContext.class,i);
		}
		public Reg_expContext reg_exp() {
			return getRuleContext(Reg_expContext.class,0);
		}
		public List_of_parent_indexesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list_of_parent_indexes; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitList_of_parent_indexes(this);
			else return visitor.visitChildren(this);
		}
	}

	public final List_of_parent_indexesContext list_of_parent_indexes() throws RecognitionException {
		List_of_parent_indexesContext _localctx = new List_of_parent_indexesContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_list_of_parent_indexes);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(66);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__4:
				case T__5:
				case T__6:
				case T__7:
				case T__14:
				case INTEGER:
					{
					setState(64);
					index();
					}
					break;
				case T__9:
					{
					setState(65);
					reg_exp();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 2:
				{
				{
				setState(68);
				index();
				setState(73);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(69);
					match(T__1);
					setState(70);
					index();
					}
					}
					setState(75);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				break;
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

	public static class Magic_varContext extends ParserRuleContext {
		public Magic_varContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_magic_var; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitMagic_var(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Magic_varContext magic_var() throws RecognitionException {
		Magic_varContext _localctx = new Magic_varContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_magic_var);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(78);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__5) | (1L << T__6))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class ExprContext extends ParserRuleContext {
		public ExprContext left_mul_expr;
		public ExprContext left_sum_expr;
		public ExprContext single_expr;
		public AtomContext single_operand;
		public Token op;
		public ExprContext right_mul_exp;
		public ExprContext right_sum_exp;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 12;
		enterRecursionRule(_localctx, 12, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				{
				setState(81);
				match(T__7);
				setState(82);
				((ExprContext)_localctx).single_expr = expr(0);
				setState(83);
				match(T__8);
				}
				break;
			case T__4:
			case T__5:
			case T__6:
			case INTEGER:
				{
				setState(85);
				((ExprContext)_localctx).single_operand = atom();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(96);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(94);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						_localctx.left_mul_expr = _prevctx;
						_localctx.left_mul_expr = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(88);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(89);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__9 || _la==T__10) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(90);
						((ExprContext)_localctx).right_mul_exp = expr(4);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						_localctx.left_sum_expr = _prevctx;
						_localctx.left_sum_expr = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(91);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(92);
						((ExprContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__11 || _la==T__12) ) {
							((ExprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(93);
						((ExprContext)_localctx).right_sum_exp = expr(3);
						}
						break;
					}
					} 
				}
				setState(98);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class RangeContext extends ParserRuleContext {
		public ExprContext left;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public RangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_range; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitRange(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RangeContext range() throws RecognitionException {
		RangeContext _localctx = new RangeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_range);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			((RangeContext)_localctx).left = expr(0);
			setState(100);
			match(T__13);
			setState(101);
			match(T__13);
			setState(102);
			((RangeContext)_localctx).right = expr(0);
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

	public static class ListContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			match(T__14);
			setState(105);
			expr(0);
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(106);
				match(T__1);
				setState(107);
				expr(0);
				}
				}
				setState(112);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(113);
			match(T__15);
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
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitReg_exp(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Reg_expContext reg_exp() throws RecognitionException {
		Reg_expContext _localctx = new Reg_expContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_reg_exp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(T__9);
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

	public static class Filter_tokenContext extends ParserRuleContext {
		public Token base;
		public Token from;
		public Token to;
		public List<TerminalNode> FILTER_WORD() { return getTokens(RepoQueryParser.FILTER_WORD); }
		public TerminalNode FILTER_WORD(int i) {
			return getToken(RepoQueryParser.FILTER_WORD, i);
		}
		public Filter_tokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter_token; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitFilter_token(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Filter_tokenContext filter_token() throws RecognitionException {
		Filter_tokenContext _localctx = new Filter_tokenContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_filter_token);
		try {
			setState(129);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(117);
				match(FILTER_WORD);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(118);
				((Filter_tokenContext)_localctx).base = match(FILTER_WORD);
				{
				setState(119);
				match(T__7);
				setState(120);
				((Filter_tokenContext)_localctx).from = match(FILTER_WORD);
				setState(121);
				match(T__16);
				setState(122);
				((Filter_tokenContext)_localctx).to = match(FILTER_WORD);
				setState(123);
				match(T__8);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				((Filter_tokenContext)_localctx).base = match(FILTER_WORD);
				{
				setState(125);
				match(T__7);
				setState(126);
				match(T__16);
				setState(127);
				((Filter_tokenContext)_localctx).to = match(FILTER_WORD);
				setState(128);
				match(T__8);
				}
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

	public static class FilterContext extends ParserRuleContext {
		public List<Filter_tokenContext> filter_token() {
			return getRuleContexts(Filter_tokenContext.class);
		}
		public Filter_tokenContext filter_token(int i) {
			return getRuleContext(Filter_tokenContext.class,i);
		}
		public FilterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_filter; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof RepoQueryVisitor ) return ((RepoQueryVisitor<? extends T>)visitor).visitFilter(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FilterContext filter() throws RecognitionException {
		FilterContext _localctx = new FilterContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_filter);
		try {
			setState(150);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(131);
				filter_token();
				setState(132);
				match(T__13);
				setState(133);
				filter_token();
				setState(134);
				match(T__13);
				setState(135);
				filter_token();
				setState(136);
				match(T__13);
				setState(137);
				filter_token();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(139);
				filter_token();
				setState(140);
				match(T__13);
				setState(141);
				filter_token();
				setState(142);
				match(T__13);
				setState(143);
				filter_token();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(145);
				filter_token();
				setState(146);
				match(T__13);
				setState(147);
				filter_token();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(149);
				filter_token();
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 6:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\26\u009b\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\7\2$\n\2\f\2"+
		"\16\2\'\13\2\5\2)\n\2\3\2\3\2\5\2-\n\2\3\3\3\3\3\3\5\3\62\n\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\4\3\4\5\4;\n\4\3\5\3\5\3\5\3\5\5\5A\n\5\3\6\3\6\5\6E\n"+
		"\6\3\6\3\6\3\6\7\6J\n\6\f\6\16\6M\13\6\5\6O\n\6\3\7\3\7\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\5\bY\n\b\3\b\3\b\3\b\3\b\3\b\3\b\7\ba\n\b\f\b\16\bd\13\b\3"+
		"\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\7\no\n\n\f\n\16\nr\13\n\3\n\3\n\3\13"+
		"\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u0084\n\f\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\5\r\u0099\n\r\3\r\2\3\16\16\2\4\6\b\n\f\16\20\22\24\26\30\2\5\3\2"+
		"\7\t\3\2\f\r\3\2\16\17\2\u00a2\2,\3\2\2\2\4.\3\2\2\2\6:\3\2\2\2\b@\3\2"+
		"\2\2\nN\3\2\2\2\fP\3\2\2\2\16X\3\2\2\2\20e\3\2\2\2\22j\3\2\2\2\24u\3\2"+
		"\2\2\26\u0083\3\2\2\2\30\u0098\3\2\2\2\32\33\5\4\3\2\33\34\7\2\2\3\34"+
		"-\3\2\2\2\35\36\5\4\3\2\36(\7\3\2\2\37)\5\30\r\2 %\5\30\r\2!\"\7\4\2\2"+
		"\"$\5\30\r\2#!\3\2\2\2$\'\3\2\2\2%#\3\2\2\2%&\3\2\2\2&)\3\2\2\2\'%\3\2"+
		"\2\2(\37\3\2\2\2( \3\2\2\2)*\3\2\2\2*+\7\2\2\3+-\3\2\2\2,\32\3\2\2\2,"+
		"\35\3\2\2\2-\3\3\2\2\2.\61\7\5\2\2/\62\5\b\5\2\60\62\5\24\13\2\61/\3\2"+
		"\2\2\61\60\3\2\2\2\62\63\3\2\2\2\63\64\7\5\2\2\64\65\5\n\6\2\65\66\7\6"+
		"\2\2\66\67\7\6\2\2\67\5\3\2\2\28;\7\24\2\29;\5\f\7\2:8\3\2\2\2:9\3\2\2"+
		"\2;\7\3\2\2\2<A\5\6\4\2=A\5\20\t\2>A\5\22\n\2?A\5\16\b\2@<\3\2\2\2@=\3"+
		"\2\2\2@>\3\2\2\2@?\3\2\2\2A\t\3\2\2\2BE\5\b\5\2CE\5\24\13\2DB\3\2\2\2"+
		"DC\3\2\2\2EO\3\2\2\2FK\5\b\5\2GH\7\4\2\2HJ\5\b\5\2IG\3\2\2\2JM\3\2\2\2"+
		"KI\3\2\2\2KL\3\2\2\2LO\3\2\2\2MK\3\2\2\2ND\3\2\2\2NF\3\2\2\2O\13\3\2\2"+
		"\2PQ\t\2\2\2Q\r\3\2\2\2RS\b\b\1\2ST\7\n\2\2TU\5\16\b\2UV\7\13\2\2VY\3"+
		"\2\2\2WY\5\6\4\2XR\3\2\2\2XW\3\2\2\2Yb\3\2\2\2Z[\f\5\2\2[\\\t\3\2\2\\"+
		"a\5\16\b\6]^\f\4\2\2^_\t\4\2\2_a\5\16\b\5`Z\3\2\2\2`]\3\2\2\2ad\3\2\2"+
		"\2b`\3\2\2\2bc\3\2\2\2c\17\3\2\2\2db\3\2\2\2ef\5\16\b\2fg\7\20\2\2gh\7"+
		"\20\2\2hi\5\16\b\2i\21\3\2\2\2jk\7\21\2\2kp\5\16\b\2lm\7\4\2\2mo\5\16"+
		"\b\2nl\3\2\2\2or\3\2\2\2pn\3\2\2\2pq\3\2\2\2qs\3\2\2\2rp\3\2\2\2st\7\22"+
		"\2\2t\23\3\2\2\2uv\7\f\2\2v\25\3\2\2\2w\u0084\7\26\2\2xy\7\26\2\2yz\7"+
		"\n\2\2z{\7\26\2\2{|\7\23\2\2|}\7\26\2\2}\u0084\7\13\2\2~\177\7\26\2\2"+
		"\177\u0080\7\n\2\2\u0080\u0081\7\23\2\2\u0081\u0082\7\26\2\2\u0082\u0084"+
		"\7\13\2\2\u0083w\3\2\2\2\u0083x\3\2\2\2\u0083~\3\2\2\2\u0084\27\3\2\2"+
		"\2\u0085\u0086\5\26\f\2\u0086\u0087\7\20\2\2\u0087\u0088\5\26\f\2\u0088"+
		"\u0089\7\20\2\2\u0089\u008a\5\26\f\2\u008a\u008b\7\20\2\2\u008b\u008c"+
		"\5\26\f\2\u008c\u0099\3\2\2\2\u008d\u008e\5\26\f\2\u008e\u008f\7\20\2"+
		"\2\u008f\u0090\5\26\f\2\u0090\u0091\7\20\2\2\u0091\u0092\5\26\f\2\u0092"+
		"\u0099\3\2\2\2\u0093\u0094\5\26\f\2\u0094\u0095\7\20\2\2\u0095\u0096\5"+
		"\26\f\2\u0096\u0099\3\2\2\2\u0097\u0099\5\26\f\2\u0098\u0085\3\2\2\2\u0098"+
		"\u008d\3\2\2\2\u0098\u0093\3\2\2\2\u0098\u0097\3\2\2\2\u0099\31\3\2\2"+
		"\2\21%(,\61:@DKNX`bp\u0083\u0098";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}