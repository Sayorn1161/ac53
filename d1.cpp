int main() {
    Team team(3); 
    Warrior w1, w2;

    team.addUnit(&w1, 0);
    team.addUnit(&w2, 1); 

    team.print(); 

    return 0;
}
