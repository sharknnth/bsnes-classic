template<unsigned timer_frequency>
class sSMPTimer {
public:
  uint8 stage0_ticks;
  uint8 stage1_ticks;
  uint8 stage2_ticks;
  uint8 stage3_ticks;
  bool current_line;
  bool enabled;
  uint8 target;

  void tick(unsigned step);
  void sync_stage1();
};

sSMPTimer<64> t0;
sSMPTimer<64> t1;
sSMPTimer< 8> t2;

alwaysinline void add_clocks(unsigned clocks);
alwaysinline void cycle_edge(unsigned speed);
