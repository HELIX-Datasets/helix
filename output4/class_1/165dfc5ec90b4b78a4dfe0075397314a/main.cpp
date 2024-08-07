extern void *liblzma_lzma_block_buffer_encode;
extern void *wavpack_execute_stereo;
extern void *mongoose_mbuf_free;
extern void *lua_lua_rotate;

int main(int argc, char **argv) {
    ((void (*)())liblzma_lzma_block_buffer_encode)();
    ((void (*)())wavpack_execute_stereo)();
    ((void (*)())mongoose_mbuf_free)();
    ((void (*)())lua_lua_rotate)();

    return 0;
}
