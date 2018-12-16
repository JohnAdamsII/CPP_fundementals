

class Singleton
{
    public:
        static Singleton& Get()
        {
            static Singleton instance;
            return instance;
        }
};


int main()
{
    Singleton::Get();
}