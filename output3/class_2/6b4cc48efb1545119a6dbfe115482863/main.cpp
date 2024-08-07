extern void *graphene_graphene_box_one;
extern void *pcre_pcre_dfa_exec;
extern void *argtable3_arg_hashtable_itr_remove;
extern void *duktape_duk_put_global_string;

int main(int argc, char **argv) {
    ((void (*)())graphene_graphene_box_one)();
    ((void (*)())pcre_pcre_dfa_exec)();
    ((void (*)())argtable3_arg_hashtable_itr_remove)();
    ((void (*)())duktape_duk_put_global_string)();

    return 0;
}
