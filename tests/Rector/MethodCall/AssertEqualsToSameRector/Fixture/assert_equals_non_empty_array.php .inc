<?php

namespace Rector\PHPUnit\Tests\Rector\MethodCall\AssertEqualsToSameRector\Fixture;

use PHPUnit\Framework\TestCase;

final class AssertEqualsNonEmptyArray extends TestCase
{
    public function test()
    {
        $array = ['test'];
        $expectedArray = ['test'];
        $this->assertEquals($array, $expectedArray);
    }
}

?>
-----
<?php

namespace Rector\PHPUnit\Tests\Rector\MethodCall\AssertEqualsToSameRector\Fixture;

use PHPUnit\Framework\TestCase;

final class AssertEqualsNonEmptyArray extends TestCase
{
    public function test()
    {
        $array = ['test'];
        $expectedArray = ['test'];
        $this->assertSame($array, $expectedArray);
    }
}

?>
