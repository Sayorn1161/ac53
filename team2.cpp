class Team : public IPrint {
private:
    Array<Unit*> units;
public:
    Team(size_t teamSize) : units(teamSize) {}

    void addUnit(Unit* unit, size_t index) {
        if (index < units.getSize()) {
            units[index] = unit;
        }
    }

    void print() const override {
        units.print();
    }
};
