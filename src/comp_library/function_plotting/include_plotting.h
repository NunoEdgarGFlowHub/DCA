// TODO: Cleanup!

#ifndef SRC_COMP_LIBRARY_FUNCTION_PLOTTING_INCLUDE_PLOTTING_H
#define SRC_COMP_LIBRARY_FUNCTION_PLOTTING_INCLUDE_PLOTTING_H

#ifdef ALLOW_GNUPLOT
#include "comp_library/function_plotting/gnuplot/gnuplot_interface.hpp"
#else

#include "comp_library/function_library/include_function_library.h"

class Gnuplot {
public:
  Gnuplot(const std::string& /*style*/ = "points") {}

  Gnuplot(const std::vector<double>& /*x*/, const std::string& /*title*/ = "",
          const std::string& /*style*/ = "points", const std::string& /*labelx*/ = "x",
          const std::string& /*labely*/ = "y") {}

  Gnuplot(const std::vector<double>& /*x*/, const std::vector<double>& /*y*/,
          const std::string& /*title*/ = "", const std::string& /*style*/ = "points",
          const std::string& /*labelx*/ = "x", const std::string& /*labely*/ = "y") {}

  Gnuplot(const std::vector<double>& /*x*/, const std::vector<double>& /*y*/,
          const std::vector<double>& /*z*/, const std::string& /*title*/ = "",
          const std::string& /*style*/ = "points", const std::string& /*labelx*/ = "x",
          const std::string& /*labely*/ = "y", const std::string& /*labelz*/ = "z") {}

  ~Gnuplot() {}

  void plot_xy(std::vector<double> /*x*/, std::vector<double> /*y*/) {}

  void showonscreen() {}
};
#endif

#include "comp_library/function_plotting/show_function.inc"
#endif
