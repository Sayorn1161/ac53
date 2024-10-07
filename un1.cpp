class Unit : public IPrint {
public:
    virtual void attack() const = 0;
    virtual ~Unit() = default;  // Обов'язково віртуальний деструктор

    // Це чисто віртуальний метод, тому клас Unit є абстрактним
    void print() const override = 0;
};
