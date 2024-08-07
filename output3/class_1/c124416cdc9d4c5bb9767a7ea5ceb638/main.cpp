extern void *mathc_svec2_tangent;
extern void *mathc_vec3_multiply_f;
extern void *minc_micopy_dimension;
extern void *nghttp2_nghttp2_nv_equal;

int main(int argc, char **argv) {
    ((void (*)())mathc_svec2_tangent)();
    ((void (*)())mathc_vec3_multiply_f)();
    ((void (*)())minc_micopy_dimension)();
    ((void (*)())nghttp2_nghttp2_nv_equal)();

    return 0;
}
