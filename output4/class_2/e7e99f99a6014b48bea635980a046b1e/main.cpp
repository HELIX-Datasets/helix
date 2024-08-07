extern void *wavelib_idwt_per_stride;
extern void *shapelib_DBFWriteNULLAttribute;
extern void *libwebsockets__lws_plat_file_open;
extern void *libzip__zip_cp437_to_utf8;

int main(int argc, char **argv) {
    ((void (*)())wavelib_idwt_per_stride)();
    ((void (*)())shapelib_DBFWriteNULLAttribute)();
    ((void (*)())libwebsockets__lws_plat_file_open)();
    ((void (*)())libzip__zip_cp437_to_utf8)();

    return 0;
}
