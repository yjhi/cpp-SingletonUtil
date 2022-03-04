
#ifdef SINGLETONUTIL_EXPORTS
#define SINGLETONUTIL_API __declspec(dllexport)
#else
#define SINGLETONUTIL_API __declspec(dllimport)
#endif


SINGLETONUTIL_API bool __stdcall SetSingleApp(const char * lock);

SINGLETONUTIL_API bool __stdcall SetSingleAndTopApp(const char * lock, const char *data, int type);

