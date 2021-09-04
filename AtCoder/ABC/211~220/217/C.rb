N = gets.to_i
p = gets.split.map(&:to_i)
q = Array.new(N, 0)
p.each_with_index do |pi, idx|
  q[pi-1] = idx + 1
end
puts(q.join(' '))
