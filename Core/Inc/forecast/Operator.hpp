#ifndef FORECAST_OPERATOR_HPP
#define FORECAST_OPERATOR_HPP

#include <forecast/include/forecast/IHardware.hpp>
#include <vector>

namespace forecast
{
   class Operator
   {
   public:
      /**
       * @brief   Controller constructor
       */
      Operator() = default;

      /**
       * @brief Default virtual destructor
       *
       */
      virtual ~Operator() = default;

      /**
       * @brief   Implementation of the math operation.
       *
       * @param   Two signals input
       */
      virtual std::vector<float> process(const IHardware *hw, 
                                         std::vector<float> input0, 
                                         std::vector<float> input1) = 0;
   };
} // namespace forecast
#endif