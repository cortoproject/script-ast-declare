/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_in_test_tc_in_dot_id(
    test_in_test this)
{
    const char *input =
        "in void data.foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_dot_nested_id(
    test_in_test this)
{
    const char *input =
        "in void data.foo.bar\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/bar/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(corto_parentof(obj))) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_full_id(
    test_in_test this)
{
    const char *input =
        "in void /data\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(obj) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_full_nested_id(
    test_in_test this)
{
    const char *input =
        "in void /data/foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_id(
    test_in_test this)
{
    const char *input =
        "in void data\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(obj) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_nested_id(
    test_in_test this)
{
    const char *input =
        "in void /data/foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_dot_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in data.foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    corto_object foo = corto_lookup(data_o, "foo");
    test_assert(foo != NULL);
    test_assert(corto_typeof(foo) == (corto_type)corto_package_o);
    test_assert(corto_parentof(foo) == data_o);
    test_assert(!corto_check_state(foo, CORTO_VALID));

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_dot_nested_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in data.foo.bar\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/bar/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(corto_parentof(obj))) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    corto_object bar = corto_lookup(data_o, "foo/bar");
    test_assert(bar != NULL);
    test_assert(corto_typeof(bar) == (corto_type)corto_package_o);
    test_assert(corto_parentof(corto_parentof(bar)) == data_o);
    test_assert(!corto_check_state(bar, CORTO_VALID));
    test_assert(corto_typeof(corto_parentof(bar)) == (corto_type)corto_unknown_o);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_full_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in /data\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(obj) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_full_nested_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in /data/foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    corto_object foo = corto_lookup(data_o, "foo");
    test_assert(foo != NULL);
    test_assert(corto_typeof(foo) == (corto_type)corto_package_o);
    test_assert(corto_parentof(foo) == data_o);
    test_assert(!corto_check_state(foo, CORTO_VALID));

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in data\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(obj) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}

void test_in_test_tc_in_nested_id_implicit_type(
    test_in_test this)
{
    const char *input =
        "in data/foo\n"
        "int32 obj: 10\n"
        ;

    ast_Node ast = cortoscript_ast_parse(input, false);
    test_assert(ast != NULL);
    test_assert(corto_typeof(ast) == (corto_type)ast_Scope_o);
    test_assertint(ut_ll_count(ast_Scope(ast)->statements), 2);

    int16_t ret = cortoscript_ast_declare(root_o, NULL, ast);
    test_assert(ret == 0);

    int32_t *obj = corto_lookup(data_o, "foo/obj");
    test_assert(obj != NULL);
    test_assert(corto_typeof(obj) == (corto_type)corto_int32_o);
    test_assert(corto_parentof(corto_parentof(obj)) == data_o);
    test_assert(corto_check_state(obj, CORTO_VALID));
    test_assertint(corto_countof(obj), 2);
    test_assertint(corto_scope_size(obj), 0);
    test_assertint(*obj, 10);

    corto_object foo = corto_lookup(data_o, "foo");
    test_assert(foo != NULL);
    test_assert(corto_typeof(foo) == (corto_type)corto_package_o);
    test_assert(corto_parentof(foo) == data_o);
    test_assert(!corto_check_state(foo, CORTO_VALID));

    test_assert(corto_delete(ast) == 0);
    test_assert(corto_release(obj) == 1);
    test_assert(corto_delete(obj) == 0);
}
