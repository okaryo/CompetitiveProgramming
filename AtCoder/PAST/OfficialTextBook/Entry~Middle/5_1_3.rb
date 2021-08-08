n = gets.to_i
mount = n.times.map{gets.chomp}
(n-1).downto(0) { |i|
  (2*n - 1).times { |j|
    if mount[i][j] == 'X'
      if i-1 >= 0 && j-1 >= 0 && mount[i-1][j-1] == '#'
        mount[i-1][j-1] = 'X'
      end
      if i-1 >= 0 && mount[i-1][j] == '#'
        mount[i-1][j] = 'X'
      end
      if i-1 >= 0 && j+1 < (2*n - 1) && mount[i-1][j+1] == '#'
        mount[i-1][j+1] = 'X'
      end
    end
  }
}
n.times{ |i| puts(mount[i])}
