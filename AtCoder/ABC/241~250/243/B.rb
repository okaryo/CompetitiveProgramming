N = gets.to_i
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
h = 0
b = {}
N.times do |i|
  if A[i] == B[i]
    h += 1
  end
  b[A[i]] ||= 0
  b[B[i]] ||= 0
  b[A[i]] += 1
  b[B[i]] += 1
end
b_c = b.select { |_, v| v >= 2}.size
puts h
puts b_c - h
