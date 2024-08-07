extern void *metis_gk_dpqCreate;
extern void *harfbuzz_hb_buffer_get_replacement_codepoint;
extern void *libwebsockets__lws_plat_file_open;
extern void *chipmunk_cpPolyShapeAlloc;

int main(int argc, char **argv) {
    ((void (*)())metis_gk_dpqCreate)();
    ((void (*)())harfbuzz_hb_buffer_get_replacement_codepoint)();
    ((void (*)())libwebsockets__lws_plat_file_open)();
    ((void (*)())chipmunk_cpPolyShapeAlloc)();

    return 0;
}
