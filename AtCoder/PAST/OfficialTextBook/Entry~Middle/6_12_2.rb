h,w = gets.split.map(&:to_i)
grid = h.times.map{gets.chomp}
mod = 10**9 + 7
sum = Array.new(h) {Array.new(w, 0)}
sum[0][0] = 1
h.times do |i|
  w.times do |j|
    next if grid[i][j] == '#'
    if i > 0
      sum[i][j] += sum[i-1][j]
    end
    if j > 0
      sum[i][j] += sum[i][j-1]
    end
    sum[i][j] %= mod
  end
end
puts(sum[h-1][w-1])
