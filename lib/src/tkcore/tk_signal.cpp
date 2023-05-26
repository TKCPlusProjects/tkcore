#include <tkcore/tk_log.hpp>
#include <execinfo.h>
#include <signal.h>

namespace tkht {
void HandlerSignalCrash(int signal) {
    cout << "Stack trace: " << endl;
    
    const size_t max_frames = 100;
    void* addrlist[max_frames + 1];
    int addrlen = backtrace(addrlist, sizeof(addrlist) / sizeof(*addrlist));
    if (addrlen == 0) {
        cout << "<empty, possibly corrupt>" << endl;
        return;
    }
    
    char** symbollist = backtrace_symbols(addrlist, addrlen);
    for (int i = 1; i < addrlen; ++i) {
        cout << "[" << i << "] " << symbollist[i] << endl;
    }
    
    free(symbollist);
    exit(signal);
}

void SubscribeSignalCrash() {
  signal(SIGABRT, HandlerSignalCrash);
  signal(SIGSEGV, HandlerSignalCrash);
}
} // namespace tkht
