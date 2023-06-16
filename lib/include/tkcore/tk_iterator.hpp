#ifndef tkcore_iterator_hpp
#define tkcore_iterator_hpp

#include <tkcore/tk_base.hpp>

namespace tkht {
#define _ForJump(Type, Value, Arr, JumpIndex, jump, i) \
Type Value;\
for (\
  int jump = 1, i = 0;\
  (jump ? i = JumpIndex : (i == JumpIndex ? i++ : i = i)), Value = Arr[i], i < Arr.size();\
  (jump ? jump=0, i=0 : i++)\
)
// 插队遍历：JumpIndex指定的元素先执行，然后剩余元素按顺序执行
#define ForJump(Type, Value, Arr, JumpIndex) _ForJump(Type, Value, Arr, JumpIndex, _jump, _i)
} // namespace tkht

#endif /* tkcore_iterator_hpp */
