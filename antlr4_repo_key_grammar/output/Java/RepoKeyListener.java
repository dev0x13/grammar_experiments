// Generated from /home/george/diplom/grammar_exp/key_grammar/antlr4/RepoKey.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link RepoKeyParser}.
 */
public interface RepoKeyListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#key}.
	 * @param ctx the parse tree
	 */
	void enterKey(RepoKeyParser.KeyContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#key}.
	 * @param ctx the parse tree
	 */
	void exitKey(RepoKeyParser.KeyContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#index}.
	 * @param ctx the parse tree
	 */
	void enterIndex(RepoKeyParser.IndexContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#index}.
	 * @param ctx the parse tree
	 */
	void exitIndex(RepoKeyParser.IndexContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#parent_index}.
	 * @param ctx the parse tree
	 */
	void enterParent_index(RepoKeyParser.Parent_indexContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#parent_index}.
	 * @param ctx the parse tree
	 */
	void exitParent_index(RepoKeyParser.Parent_indexContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#magic_var}.
	 * @param ctx the parse tree
	 */
	void enterMagic_var(RepoKeyParser.Magic_varContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#magic_var}.
	 * @param ctx the parse tree
	 */
	void exitMagic_var(RepoKeyParser.Magic_varContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#mul_exp}.
	 * @param ctx the parse tree
	 */
	void enterMul_exp(RepoKeyParser.Mul_expContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#mul_exp}.
	 * @param ctx the parse tree
	 */
	void exitMul_exp(RepoKeyParser.Mul_expContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#sum_exp}.
	 * @param ctx the parse tree
	 */
	void enterSum_exp(RepoKeyParser.Sum_expContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#sum_exp}.
	 * @param ctx the parse tree
	 */
	void exitSum_exp(RepoKeyParser.Sum_expContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#range}.
	 * @param ctx the parse tree
	 */
	void enterRange(RepoKeyParser.RangeContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#range}.
	 * @param ctx the parse tree
	 */
	void exitRange(RepoKeyParser.RangeContext ctx);
	/**
	 * Enter a parse tree produced by {@link RepoKeyParser#reg_exp}.
	 * @param ctx the parse tree
	 */
	void enterReg_exp(RepoKeyParser.Reg_expContext ctx);
	/**
	 * Exit a parse tree produced by {@link RepoKeyParser#reg_exp}.
	 * @param ctx the parse tree
	 */
	void exitReg_exp(RepoKeyParser.Reg_expContext ctx);
}