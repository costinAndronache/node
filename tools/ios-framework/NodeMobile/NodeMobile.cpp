
#import "NodeMobile.h"

namespace node {
    int Start(int argc, char *argv[]);

    class SnapshotBuilder {
        static void* GetEmbeddedSnapshotData();
    };
} // namespace node

void* node::SnapshotBuilder::GetEmbeddedSnapshotData() {
    return nullptr;
}

int node_start(int argc, char *argv[]) {
    return node::Start(argc, argv);
}
