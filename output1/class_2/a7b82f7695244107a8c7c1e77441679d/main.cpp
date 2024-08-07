extern void *gsl_gsl_integration_fixed_weights;
extern void *chipmunk_cpPolyShapeGetCount;
extern void *libebur128_ebur128_destroy;
extern void *meshoptimizer_meshopt_computeClusterBounds;

int main(int argc, char **argv) {
    ((void (*)())gsl_gsl_integration_fixed_weights)();
    ((void (*)())chipmunk_cpPolyShapeGetCount)();
    ((void (*)())libebur128_ebur128_destroy)();
    ((void (*)())meshoptimizer_meshopt_computeClusterBounds)();

    return 0;
}
