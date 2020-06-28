a, b, k = gets.split.map(&:to_i)
ar = []
1.upto([a, b].max) do |x|
  if a % x == 0 && b % x == 0
    ar << x
  end
end

puts ar[ar.length - k]