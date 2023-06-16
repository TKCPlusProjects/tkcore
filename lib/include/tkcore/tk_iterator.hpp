#ifndef tkcore_iterator_hpp
#define tkcore_iterator_hpp

#include <tkcore/tk_base.hpp>

namespace tkht {
// 插队遍历：JumpIndex指定的元素先执行，然后剩余元素按顺序执行
#define ForJump(Index, Arr, JumpIndex) for ( \
  int Index = -1; \
  (Index == -1 ? Index = JumpIndex : (Index == JumpIndex ? Index++ : 0)), Index < Arr.size(); \
  (Index == JumpIndex ? Index=0 : Index++) \
)
} // namespace tkht

#endif /* tkcore_iterator_hpp */
