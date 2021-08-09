n = gets.to_i
h = gets.split.map(&:to_i)
costs = Array.new(n, 0)
costs[1] = (h[0] - h[1]).abs
2.upto(n-1) do |i|
  costs[i] = [(costs[i-1] + (h[i] - h[i-1]).abs), (costs[i-2] + (h[i] - h[i-2]).abs)].min
end
puts(costs.last)
