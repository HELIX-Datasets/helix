extern void *rappture_rp_dxwriter_pos_;
extern void *nghttp2_nghttp2_buf_free;
extern void *libmediainfo_sha512_begin;
extern void *librabbitmq_amqp_destroy_connection;

int main(int argc, char **argv) {
    ((void (*)())rappture_rp_dxwriter_pos_)();
    ((void (*)())nghttp2_nghttp2_buf_free)();
    ((void (*)())libmediainfo_sha512_begin)();
    ((void (*)())librabbitmq_amqp_destroy_connection)();

    return 0;
}
