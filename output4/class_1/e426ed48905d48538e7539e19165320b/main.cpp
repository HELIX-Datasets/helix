extern void *superlu_SetIWork;
extern void *librabbitmq_amqp_decode_method;
extern void *duktape_duk_set_top;
extern void *mujs_js_eval;

int main(int argc, char **argv) {
    ((void (*)())superlu_SetIWork)();
    ((void (*)())librabbitmq_amqp_decode_method)();
    ((void (*)())duktape_duk_set_top)();
    ((void (*)())mujs_js_eval)();

    return 0;
}
