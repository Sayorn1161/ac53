class Warrior : public Unit {
public:
    void attack() const override {
        std::cout << "Warrior attacks!" << std::endl;
    }

    void print() const override {
        std::cout << "Warrior" << std::endl;
    }
};
