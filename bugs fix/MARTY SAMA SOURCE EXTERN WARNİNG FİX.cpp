Game-Db Source/Extern/include/cryptopp/algparam.h

gir ve arat;

		CRYPTOPP_COMPILE_ASSERT(sizeof(CPP_TYPENAME T::value_type) == 1);

altýna ekle;

		CRYPTOPP_UNUSED(cryptopp_assert_26);

tekrar arat;

		AlgorithmParametersTemplate<T>* p = new(buffer) AlgorithmParametersTemplate<T>(*this);

altýna ekle;

		CRYPTOPP_UNUSED(p);

Game-Db Source/Extern/include/cryptopp/config.h

gir ve arat;

#define CRYPTOPP_DISABLE_ASM

altýna ekle;

#define CRYPTOPP_UNUSED(x) ((void)x);

Game-Db Source/Extern/include/cryptopp/misc.h

gir ve arat;

static std::string StringNarrow(const wchar_t *str, bool throwOnError = true)

deðiþtir ve derle;

inline std::string StringNarrow(const wchar_t *str, bool throwOnError = true)