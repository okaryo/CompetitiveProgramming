require 'set'
S,K = gets.split
n = S.size
set = Set.new()
(0..(n-1)).to_a.permutation(n).each do |c|
  s = ''
  c.each { |ci| s += S[ci] }
  set << s
end
puts(set.sort[K.to_i - 1])
