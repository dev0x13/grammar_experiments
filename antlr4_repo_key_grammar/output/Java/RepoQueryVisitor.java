// Generated from /media/george/HOME/home/george/diplom/grammar_experiments/antlr4_repo_key_grammar/grammars/RepoQuery.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link RepoQueryParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface RepoQueryVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#query}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitQuery(RepoQueryParser.QueryContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#key}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKey(RepoQueryParser.KeyContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#atom}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAtom(RepoQueryParser.AtomContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#index}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIndex(RepoQueryParser.IndexContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#list_of_parent_indexes}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList_of_parent_indexes(RepoQueryParser.List_of_parent_indexesContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#magic_var}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMagic_var(RepoQueryParser.Magic_varContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr(RepoQueryParser.ExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#range}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRange(RepoQueryParser.RangeContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#list}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitList(RepoQueryParser.ListContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#reg_exp}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitReg_exp(RepoQueryParser.Reg_expContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#filter_token}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFilter_token(RepoQueryParser.Filter_tokenContext ctx);
	/**
	 * Visit a parse tree produced by {@link RepoQueryParser#filter}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFilter(RepoQueryParser.FilterContext ctx);
}