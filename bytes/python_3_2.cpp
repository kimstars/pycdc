#include "bytecode_map.h"

BEGIN_MAP(3, 2)
    MAP_OP(0, STOP_CODE)
    MAP_OP(1, POP_TOP)
    MAP_OP(2, ROT_TWO)
    MAP_OP(3, ROT_THREE)
    MAP_OP(4, DUP_TOP)
    MAP_OP(5, DUP_TOP_TWO)
    MAP_OP(9, NOP)
    MAP_OP(10, UNARY_POSITIVE)
    MAP_OP(11, UNARY_NEGATIVE)
    MAP_OP(12, UNARY_NOT)
    MAP_OP(15, UNARY_INVERT)
    MAP_OP(19, BINARY_POWER)
    MAP_OP(20, BINARY_MULTIPLY)
    MAP_OP(22, BINARY_MODULO)
    MAP_OP(23, BINARY_ADD)
    MAP_OP(24, BINARY_SUBTRACT)
    MAP_OP(25, BINARY_SUBSCR)
    MAP_OP(26, BINARY_FLOOR_DIVIDE)
    MAP_OP(27, BINARY_TRUE_DIVIDE)
    MAP_OP(28, INPLACE_FLOOR_DIVIDE)
    MAP_OP(29, INPLACE_TRUE_DIVIDE)
    MAP_OP(54, STORE_MAP)
    MAP_OP(55, INPLACE_ADD)
    MAP_OP(56, INPLACE_SUBTRACT)
    MAP_OP(57, INPLACE_MULTIPLY)
    MAP_OP(59, INPLACE_MODULO)
    MAP_OP(60, STORE_SUBSCR)
    MAP_OP(61, DELETE_SUBSCR)
    MAP_OP(62, BINARY_LSHIFT)
    MAP_OP(63, BINARY_RSHIFT)
    MAP_OP(64, BINARY_AND)
    MAP_OP(65, BINARY_XOR)
    MAP_OP(66, BINARY_OR)
    MAP_OP(67, INPLACE_POWER)
    MAP_OP(68, GET_ITER)
    MAP_OP(69, STORE_LOCALS)
    MAP_OP(70, PRINT_EXPR)
    MAP_OP(71, LOAD_BUILD_CLASS)
    MAP_OP(75, INPLACE_LSHIFT)
    MAP_OP(76, INPLACE_RSHIFT)
    MAP_OP(77, INPLACE_AND)
    MAP_OP(78, INPLACE_XOR)
    MAP_OP(79, INPLACE_OR)
    MAP_OP(80, BREAK_LOOP)
    MAP_OP(81, WITH_CLEANUP)
    MAP_OP(83, RETURN_VALUE)
    MAP_OP(84, IMPORT_STAR)
    MAP_OP(86, YIELD_VALUE)
    MAP_OP(87, POP_BLOCK)
    MAP_OP(88, END_FINALLY)
    MAP_OP(89, POP_EXCEPT)
    MAP_OP(90, STORE_NAME_A)
    MAP_OP(91, DELETE_NAME_A)
    MAP_OP(92, UNPACK_SEQUENCE_A)
    MAP_OP(93, FOR_ITER_A)
    MAP_OP(94, UNPACK_EX_A)
    MAP_OP(95, STORE_ATTR_A)
    MAP_OP(96, DELETE_ATTR_A)
    MAP_OP(97, STORE_GLOBAL_A)
    MAP_OP(98, DELETE_GLOBAL_A)
    MAP_OP(100, LOAD_CONST_A)
    MAP_OP(101, LOAD_NAME_A)
    MAP_OP(102, BUILD_TUPLE_A)
    MAP_OP(103, BUILD_LIST_A)
    MAP_OP(104, BUILD_SET_A)
    MAP_OP(105, BUILD_MAP_A)
    MAP_OP(106, LOAD_ATTR_A)
    MAP_OP(107, COMPARE_OP_A)
    MAP_OP(108, IMPORT_NAME_A)
    MAP_OP(109, IMPORT_FROM_A)
    MAP_OP(110, JUMP_FORWARD_A)
    MAP_OP(111, JUMP_IF_FALSE_OR_POP_A)
    MAP_OP(112, JUMP_IF_TRUE_OR_POP_A)
    MAP_OP(113, JUMP_ABSOLUTE_A)
    MAP_OP(114, POP_JUMP_IF_FALSE_A)
    MAP_OP(115, POP_JUMP_IF_TRUE_A)
    MAP_OP(116, LOAD_GLOBAL_A)
    MAP_OP(119, CONTINUE_LOOP_A)
    MAP_OP(120, SETUP_LOOP_A)
    MAP_OP(121, SETUP_EXCEPT_A)
    MAP_OP(122, SETUP_FINALLY_A)
    MAP_OP(124, LOAD_FAST_A)
    MAP_OP(125, STORE_FAST_A)
    MAP_OP(126, DELETE_FAST_A)
    MAP_OP(130, RAISE_VARARGS_A)
    MAP_OP(131, CALL_FUNCTION_A)
    MAP_OP(132, MAKE_FUNCTION_A)
    MAP_OP(133, BUILD_SLICE_A)
    MAP_OP(134, MAKE_CLOSURE_A)
    MAP_OP(135, LOAD_CLOSURE_A)
    MAP_OP(136, LOAD_DEREF_A)
    MAP_OP(137, STORE_DEREF_A)
    MAP_OP(138, DELETE_DEREF_A)
    MAP_OP(140, CALL_FUNCTION_VAR_A)
    MAP_OP(141, CALL_FUNCTION_KW_A)
    MAP_OP(142, CALL_FUNCTION_VAR_KW_A)
    MAP_OP(143, SETUP_WITH_A)
    MAP_OP(144, EXTENDED_ARG_A)
    MAP_OP(145, LIST_APPEND_A)
    MAP_OP(146, SET_ADD_A)
    MAP_OP(147, MAP_ADD_A)
END_MAP()
