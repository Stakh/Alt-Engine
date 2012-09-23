#ifndef SYSTEM_H
#define SYSTEM_H

#if defined(_WIN32) || defined(__WIN32__)
    #define ALT_OS Windows
    #define ALT_OS_WINDOWS
#elif defined(linux) || defined(__linux)
    #define ALT_OS Linux
    #define ALT_OS_LINUX
#elif defined(__APPLE__) || defined(MACOSX) || defined(macintosh) || defined(Macintosh)
    #define ALT_OS MacOs
    #define ALT_OS_MACOS
#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)  || defined(__gnu_hurd__)
    #define ALT_OS FreeBsd
    #define ALT_OS_FREEBSD
#else
    #error Alt Engine does not support your OS, sorry
#endif

#endif // SYSTEM_H
