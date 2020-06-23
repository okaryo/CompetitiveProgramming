n = gets.to_i
a = gets.split.map(&:to_i)
mod = 10**9 + 7

all_xor = 0
a.each do |x|
  all_xor ^= x
end


