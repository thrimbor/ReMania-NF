//
// Created by protobit on 10/02/2021.
//

#include <assetLayer.h>

int main(int argc, char** argv) {
    std::ifstream file(std::string(argv[1])+"/assets/Packs/packlist.dat");
    if (assetLayer::getPackListVer(file) == 1) {
        printf("Test passed");
    }
    else {
        printf("Test failed");
    }
}