require 'set'
N,X = gets.split.map(&:to_i)
A,B = N.times.map{gets.split.map(&:to_i)}.transpose

s = Set.new([0])
N.times do |i|
  new_s = Set.new()
  s.each do |v|
    new_s.add(v + A[i])
    new_s.add(v + B[i])
  end
  s = new_s
end
puts s.include?(X) ? 'Yes' : 'No'
