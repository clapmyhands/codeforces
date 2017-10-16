#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    int h,m,s,t1,t2;
    std::cin >> h >> m >> s >> t1 >> t2;
    float h_deg, m_deg, s_deg, t1_deg, t2_deg;
    
    // effect of hour
    h_deg = h*30 % 360;
    t1_deg = t1*30 % 360;
    t2_deg = t2*30 % 360;
    // effect of minute
    m_deg = m*6;
    h_deg += m*0.5;
    // effect of second
    s_deg = s*6;
    m_deg += s*0.1;
    h_deg += s*0.05;

    bool yes = true;
    float floats[] = {h_deg, m_deg, s_deg, t1_deg, t2_deg};
    float min = *std::min_element(floats, floats+5);
    float max = *std::max_element(floats, floats+5);
    if(!((min==t1_deg && max==t2_deg) || (min==t2_deg && max==t1_deg))){
        float b = std::max(t1_deg,t2_deg);
        float a = std::min(t1_deg,t2_deg);
        if((a<h_deg && h_deg<b) || (a<m_deg && m_deg<b) || (a<s_deg && s_deg<b))
            yes=false;
    }
    if(yes)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}