require 'set'

N = gets.to_i
LA = N.times.map{gets.split.map(&:to_i)}
s = Set.new
N.times {|i| s << LA[i][1, LA[i][0]+1]}
puts s.size
