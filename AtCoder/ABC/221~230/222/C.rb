N,M = gets.split.map(&:to_i)
A = (2*N).times.map{gets.chomp}
win = Array.new(2*N) {|i| [0, i]}
M.times do |i|
  N.times do |j|
    p1 = win[2*j][1]
    p2 = win[2*j+1][1]
    x = A[p1][i]
    y = A[p2][i]
    next if x == y
    if (x == 'G' && y == 'P') || (x == 'C' && y == 'G') || (x == 'P' && y == 'C')
      win[2*j+1][0] -= 1
    else
      win[2*j][0] -= 1
    end
  end
  win.sort!
end
win.each do |_, x|
  puts(x+1)
end
